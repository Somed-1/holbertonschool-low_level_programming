#include "main.h"
/**
 * print_triangle - Entry point
 *
 *@size: int
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int i;
int j;
int e;
for (i = 1; i < size + 1; i++)
{
	for (j = 0; j < size - i; j++)
	{
		_putchar(' ');

	}
	for (e = 0; e < i; e++)
	{
		_putchar('#');
	}
	putchar('\n');
}
return (0);
}
