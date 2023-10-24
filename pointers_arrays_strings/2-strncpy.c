#include "main.h"

/**
 * _strncpy - Concatenate two strings, limiting the number of characters copied
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';

return (dest);
}

