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
		if (j > 0)
		{
			_puthcar(',');
			_putchar(' ');
		}
		if (number >= 10)
		{
			last = number % 10;
			number /= 10;
			number %= 10;
			_putchar('0' + number);
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
