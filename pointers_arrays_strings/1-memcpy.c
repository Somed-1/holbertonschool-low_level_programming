#include "main.h"
/**
 * _memcpy - Concatenate two strings, limiting the number of characters copied
 *
 * @dest: Destination string
 * @src: Maximum number of characters to copy from src
 * @n: unsigned int
 *
 * Return: Pointer to the concatenated string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
