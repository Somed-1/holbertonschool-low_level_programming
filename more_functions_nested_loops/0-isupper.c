#include "main.h"
/**
 * _isupper - returns 1 if char is lowercase
 *
 * @c: character to be checked if upper case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
