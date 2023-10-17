#include "main.h"

/**
 * print_to_98 - returns 1 if char is lowercase
 *
 * @n: int
 *
 * Return: 1 if lower case, 0 otherwise
 **/

void print_to_98(int n)
{
int last;
int first;
for (; n < 99; n++)
{
	if (n < 0)
	if (n >= 10)
	{
		last = n % 10;
		first = n / 10 % 10;
		_putchar('0' + first);
		_putchar('0' + last);
	}
	else
	{
		_putchar('0' + n);
	}
	if (n == 98)
	{
		continue;
	}
	_putchar(',');
	_putchar(' ');
}
_putchar('\n');
}
