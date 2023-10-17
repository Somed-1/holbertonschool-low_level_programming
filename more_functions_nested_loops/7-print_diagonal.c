#include "main.h"
/**
 * print_diagonal - returns 1 if char is lowercase
 *
 * @n: character to be checked if grater than zero etc, type int
 *
 * Return: 1 and prints + if > 0, 0 otherwise
 **/
void print_diagonal(int n)
{
int i;
int j;

if (n > 0)
{
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
