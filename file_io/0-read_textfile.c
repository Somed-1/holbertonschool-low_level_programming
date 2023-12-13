#include "main.h"


/**
 * read_textfile - reads a test file
 * @filename: name of file
 * @letters: size to read
 * Return: size of writen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_len, w_len;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	r_len = read(fd, buf, letters);
	if (r_len < 0)
		return (0);

	w_len = write(STDOUT_FILENO, buf, r_len);
	if (w_len < 0)
		return (0);

	free(buf);
	close(fd);
	return (w_len);
}
