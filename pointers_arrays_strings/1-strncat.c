#include "main.h"

/**
 * _strlen - Calculate the length of a string
 *
 * @s: Pointer to a string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
	len++;
}
return (len);
}

/**
 * _strncat - Concatenate two strings, limiting the number of characters copied
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i = 0;
while (i < n && src[i] != '\0')
{
	dest[i + dest_len] = src[i];
	i++;
}
dest[i + dest_len] = '\0';

return (dest);
}
