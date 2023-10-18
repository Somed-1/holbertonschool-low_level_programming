#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
int number_2;
for (number = 0; number < 9; number++)
{
	for (number_2 = number + 1; number_2 < 10; number_2++)
	{
		putchar('0' + number);
		putchar('0' + number_2);
		if (number != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
