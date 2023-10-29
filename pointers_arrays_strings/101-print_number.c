#include "main.h"
/**
* print_number - Prints an integer to the console
*
* This function takes an integer as input and prints it to the
* integer is negative, the function first prints a minus sign
* converts the integer to its absolute value. The function the
* divides the integer by 10 until it reaches a single digit,
* digit to the console using the putchar function. The putchar
*
* @n: The integer to be printed
*
* Return: void
*/
void print_number(int n)
{
unsigned int k;

if (n < 0)
{
_putchar('-');
n *= -1;
}

k = n;

if (k / 10)
print_number(k / 10);

_putchar(k % 10 + '0');
}
