#include "main.h"

/**
 * print_binary - print binary number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag || shift == 0)
		{
			putchar('0');
		}
		shift--;
	}
}
