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

/**
* real - check if s is palindrome
* @s: base address for string.
* @left: base
* @right: base
*
* Return: 1 if n is prime, 0 otherwise.
*/
int real(char *s, int left, int right)
{
if (left >= right)
{
	return (1);
}
if (*(s + left) == *(s + right))
{
	return (real(s, left + 1, right - 1));
}
else
{
	return (0);
}
}

/**
* is_palindrome - check if s is palindrome
* @s: base address for string.
*
* Return: 1 if n is prime, 0 otherwise.
*/
int is_palindrome(char *s)
{
if (*s == '\0')
{
	return (1);
}
return (real(s, 0, len(s) - 1));
}
