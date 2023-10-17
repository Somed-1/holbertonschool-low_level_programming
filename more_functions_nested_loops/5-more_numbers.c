#include "main.h"
/**
 * more_numbers - returns 1 if char is lowercase
 *
 * Return: 1 if lower case, 0 otherwise
 **/
void more_numbers(void)
{
int number;
int row;
for (row = 0; row < 15; row++)
{
for (number = 0; number < 10; number++)
{
	if (number >= 10)
	{
		_putchar('0' + number / 10)
	}
	_putchar('0' + number % 10);
}
_putchar('\n');
}
}
