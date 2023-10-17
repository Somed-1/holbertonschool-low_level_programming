#include "main.h"
/**
 * _isdigit - returns 1 if char is lowercase
 *
 * @c: character to be checked if upper case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}
