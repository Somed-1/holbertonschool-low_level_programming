#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
	putchar(48 + number);
	if (number != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
printf("\n");
return (0);
}
