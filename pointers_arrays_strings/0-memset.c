#include "main.h"
/**
 * _memset - Concatenate two strings, limiting the number of characters copied
 *
 * @s: Destination string
 * @b: Maximum number of characters to copy from src
 * @n: unsigned int
 *
 * Return: Pointer to the concatenated string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
	s[i] = b;
	i++;
}
return (s);
}
