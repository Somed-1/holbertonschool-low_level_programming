#include "main.h"
/**
 * print_numbers - returns 1 if char is lowercase
 *
 * Return: 1 if lower case, 0 otherwise
 **/
void print_numbers(void)
{
int number;
for (number = 0; number < 10; number++)
{
	_putchar('0' + number);
}
_putchar('\n');
}
