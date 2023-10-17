#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - returns 1 if char is lowercase
 *
 * @n: int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
n++;
}
}
else
{
while (n >= 98)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
n--;
}
}
printf("\n");
}
