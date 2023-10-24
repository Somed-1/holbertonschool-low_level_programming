#include "main.h"
/**
 * _strchr - Concatenate two strings, limiting the number of characters copied
 *
 * @s: Destination string
 * @c: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strchr(char *s, char c)
{
if (c == '\0')
{
	return (0);
}
while (*s)
{
	if (*s == c)
	{
		return (s);
	}
	s++;
}
return ('\0');
}
