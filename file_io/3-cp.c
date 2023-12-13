#include "main.h"

#define BUF_SIZE 1024

#define CLOSE_ERR "Error: Can't close fd %d\n"
#define READ_ERR "Error: Can't read from file %s\n"
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
 * check_to - checks to
 * @fd_to: fd to
 * @file_to: file to
 * Return: void
 */
void check_to(int fd_to, char *file_to, int fd_from, int check)
{
	if (check < 0)
	{
		dprintf(STDERR_FILENO, WRITE_ERR, file_to);
		if (fd_to > 0)
			close(fd_to);
		if (fd_from > 0)
			close(fd_from);
		exit(99);
	}
}

/**
 * check_from - checks from
 * @fd_from: fd from
 * @file_from: file from
 * Return: void
 */
void check_from(int fd_from, char *file_from, int fd_to, int check)
{
	if (check < 0)
	{
		dprintf(STDERR_FILENO, READ_ERR, file_from);
		if (fd_to > 0)
			close(fd_to);
		if (fd_from > 0)
			close(fd_from);
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
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	check_from(-1, file_from, -1, fd_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	check_to(-1, file_to, fd_from, fd_to);

	while ((r_len = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		check_from(fd_from, file_from, fd_to, r_len);
		w_len = write(fd_to, buf, r_len);
		check_to(fd_to, file_to, fd_from, w_len);
	}
	try_close(fd_from);
	try_close(fd_to);

	return (0);
}
