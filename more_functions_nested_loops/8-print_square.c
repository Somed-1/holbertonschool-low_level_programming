#include "main.h"
/**
 * print_square - returns 1 if char is lowercase
 *
 * @size: character to be checked if grater than zero etc, type int
 *
 * Return: 1 and prints + if > 0, 0 otherwise
 **/
void print_square(int size)
{
int i;
int j;
for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
