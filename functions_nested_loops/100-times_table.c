#include "main.h"

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
int last;
int mid;
if (n > 0 && n < 15)
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
		if (number >= 10 && number < 100)
		{
			last = number % 10;
			number /= 10;
			number %= 10;
			_putchar('0' + number);
			_putchar('0' + last);
		}
		else if (number >= 100)
		{
			last = number % 10;
			number /= 10;
			mid = number % 10;
			number /= 10;
			_putchar('0' + number % 10);
			_putchar('0' + mid);
			_putchar('0' + last);
		}
		else
		{
			_putchar('0' + number);
		}
	}
	_putchar('\n');
}
}
}
