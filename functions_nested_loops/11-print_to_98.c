#include "main.h"

/**
 * times_table - returns 1 if char is lowercase
 *
 * Return: 1 if lower case, 0 otherwise
 **/

void times_table(int n)
{
int last;
for (; n < 99; n++)
{
	if (n >= 10)
	{
		last = n % 10;
		n /= 10;
		n %= 10;
		_putchar('0' + n);
		_putchar('0' + last);
	}
	else
	{
		_putchar('0' + n);
	}
	_putchar(',');
	_putchar(' ');
}
}
