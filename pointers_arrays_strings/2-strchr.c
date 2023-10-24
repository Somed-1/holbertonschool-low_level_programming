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
while (*s)
{
	if (*s == c)
	{
		return (s);
	}
	s++;
}
if (c == '\0')
{
	return (s);
}
return ('\0');
}
