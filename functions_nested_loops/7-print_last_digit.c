#include "main.h"
/**
 * print_last_digit - returns 1 if char is lowercase
 *
 * @num: character to be checked if grater than zero etc, type int
 *
 * Return: 1 and prints + if > 0, 0 otherwise
 **/
int print_last_digit(int num)
{
int last;
last = num % 10;
if (last < 0)
{
	last = -last;
}
_putchar(48 + last);
return (last);
}
