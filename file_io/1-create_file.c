#include "main.h"

/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: write to file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_len, text_len;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		text_content = " ";
		text_len = 0;
	}
	else
	{
		text_len = strlen(text_content);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	w_len = write(fd, text_content, text_len);
	if (w_len < 0)
		return (-1);

	close(fd);

	return (1);
}
