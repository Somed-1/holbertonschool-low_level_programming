#include "main.h"

/**
 * times_table - returns 1 if char is lowercase
 *
 * Return: 1 if lower case, 0 otherwise
 **/

void times_table(void)
{
int i;
int j;
int number;
int last;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		number = i * j;
		if (number >= 10)
		{
			last = number % 10;
			number /= 10;
			number %= 10;
			_putchar('0' + number);
			_putchar('0' + last);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			_putchar('0' + number);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
}
