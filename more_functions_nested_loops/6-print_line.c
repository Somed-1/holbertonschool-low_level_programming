#include "main.h"
/**
 * print_line - returns 1 if char is lowercase
 *
 *@n: int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
	if (n < 0)
	{
		continue;
	}
	_putchar('_');
}
_putchar('\n');
}
