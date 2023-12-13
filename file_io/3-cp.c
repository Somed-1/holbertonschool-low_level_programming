#include "main.h"

#define BUF_SIZE 1024

#define CLOSE_ERR "Error: Can't close fd %d\n"
#define OPEN_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
#define USAGE_ERR "Usage: cp file_from file_to\n"
/**
 * try_close - treis to close file
 * @fd: fd of file
 * Return: void
 */
void try_close(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, CLOSE_ERR, fd);
		exit(100);
	}
}

/**
 * check_fd - checks fd of file
 * @fd_from: fd from
 * @fd_to: fd to
 * @file_from: file from
 * @file_to: file to
 * Return: void
 */
void check_fd(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char *wrong;

	if (fd_from < 0 || fd_to < 0)
	{
		wrong = (fd_from < 0) ? file_from : file_to;
		dprintf(STDERR_FILENO, OPEN_ERR, wrong);
		if (fd_from > 0)
			close(fd_from);
		else
			close(fd_to);
		exit(98);
	}
}

/**
 * main - main function
 * @argc: num of args
 * @argv: list of args
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *file_from, *file_to;
	char buf[BUF_SIZE] = {0};
	int r_len, w_len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE_ERR);
		exit(98);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	check_fd(fd_from, fd_to, file_from, file_to);

	while ((r_len = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w_len = write(fd_to, buf, r_len);
		if (w_len < 0)
		{
			dprintf(STDERR_FILENO, WRITE_ERR, file_to);
			exit(99);
		}
	}
	try_close(fd_from);
	try_close(fd_to);
	return (0);
}
