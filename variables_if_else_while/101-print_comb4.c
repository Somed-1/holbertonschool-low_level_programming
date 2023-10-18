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
int number_3;
for (number = 0; number < 8; number++)
{
	for (number_2 = number + 1; number_2 < 9; number_2++)
	{
		for (number_3 = number_2 + 1; number_3 < 10; number_3)
		{
			putchar('0' + number);
			putchar('0' + number_2);
			putchar('0' + number_3);
			if (number != 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
