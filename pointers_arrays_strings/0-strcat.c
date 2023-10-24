#include "main.h"

/**
 * _strlen - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcat - Entry point
 *
 * @dest: char
 * @src: char
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	return dest;
}
