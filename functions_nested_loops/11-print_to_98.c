#include "main.h"

/**
 * print_number - returns 1 if char is lowercase
 *
 * @n: int
 *
 * Return: 1 if lower case, 0 otherwise
 **/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0')
}

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
	print(n);
	_putchar(',');
	_putchar(' ');
}
_putchar('\n');
}
