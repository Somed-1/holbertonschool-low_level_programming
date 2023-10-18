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
int integer;
int integer_2;
for (number = 0; number < 10; number++)
{
	for (number_2 = number; number_2 < 10; number_2++)
	{
		for (integer = number_2; integer < 10; integer++)
		{
			for (integer_2 = integer + 1; integer_2 < 10; integer_2+++)
			{
				putchar('0' + number);
				putchar('0' + number_2);
				putchar(' ');
				putchar('0' + integer);
				putchar('0' + integer_2);
				if (number != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
