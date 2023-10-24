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
if (s[0] == '')
{
	return(0);
}
int len;
len = 0;
while (s[len] != '\0')
{
	len++;
}
return (len);
}

/**
 * _strncat - Entry point
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i = 0;
while (i < n)
{
	dest[i + dest_len] = src[i];
	i++;
}
return (dest);
}
