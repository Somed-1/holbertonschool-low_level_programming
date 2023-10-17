#include "main.h"
/**
 * print_diagonal - returns 1 if char is lowercase
 *
 *@n: int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
void print_diagonal(int n)
{
int i;
for (i = 0; i < n - 1; i++)
{
	if (n < 0)
	{
		continue;
	}
	_putchar(' ');
}
if (n > 0)
{
	_putchar('\\');
}
_putchar('\n');
}
