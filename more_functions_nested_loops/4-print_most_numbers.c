#include "main.h"
/**
 * print_most_numbers - returns 1 if char is lowercase
 *
 * Return: 1 if lower case, 0 otherwise
 **/
void print_most_numbers(void)
{
int number;
for (number = 0; number < 10; number++)
{
	if (number == 2 || number == 4)
	{
		continue;
	}
	_putchar('0' + number);
}
_putchar('\n');
}
