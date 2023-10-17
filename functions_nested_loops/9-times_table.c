#include "main.h"

/**
 * jack_bauer - returns 1 if char is lowercase
 *
 * @hr and @min: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/

void jack_bauer(void)
{
int i;
int j;
int number;
int last;

for (i = 0; i < 10; i++)
{
	for (j = 0: j < 10; j++)
	{
		number = i * j;
		if (number >= 10)
		{
			last = number % 10
			number /= 10;
			number %= 10;
			_putchar('0' + number);
			_putchar('0' + last);
		}
		else
		{
			_putchar('0' + number);
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
}
