#include "main.h"

/**
 * print - prints number
 *
 * @n: int
 *
 * Return: 1 if lower case,
 **/
void print(long n)
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
_putchar(n % 10 + '0');
}

/**
 * print_times_table - returns 1 if char is lowercase
 *
 *@n: int size of table can't be greater than 10 and less than 0
 *
 * Return: 1 if lower case, 0 otherwise
 **/

void print_times_table(int n)
{
int i;
int j;
int number;
if (n >= 0 && n < 15)
{
for (i = 0; i < n + 1; i++)
{
	for (j = 0; j < n + 1; j++)
	{
		number = i * j;
		if (j > 0)
		{
			_putchar(',');
			_putchar(' ');
			if (number < 10)
			{
				_putchar(' ');
			}
			if (number < 100)
			{
				_putchar(' ');
			}
		}
		print(number);
	}
	_putchar('\n');
}
}
}
