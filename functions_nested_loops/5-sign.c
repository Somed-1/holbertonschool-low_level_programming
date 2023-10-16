#include "main.h"
/**
 * print_sign - returns 1 if char is lowercase
 *
 * @n: character to be checked if grater than zero etc, type int
 *
 * Return: 1 and prints + if > 0, 0 otherwise
 **/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0 + 48);
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
