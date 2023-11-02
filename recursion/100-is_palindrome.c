#include "main.h"
/**
* len - len of string.
* @s: the string to be printed
* Return: the length of string
**/
int len(char *s)
{
if (s[0] != '\0')
{
	return (1 + len(s + 1));
}
return (0);
}

int real(char *s, int left, int right)
{
if (left >= right)
{
	return (1);
}
if (*(s + left) == *(s + right))
{
	real(s, left + 1, right - 1);
}
else
{
	return (0);
}
}


int is_palindrome(char *s)
{
if (*s == '\0')
{
	return (1);
}
return real(s, 0, len(s) - 1)
}
