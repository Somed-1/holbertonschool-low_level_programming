#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
int dev;
for (number = 1; number < 101; number++)
{
	dev = 0;
	if (number % 3 == 0)
	{
		printf("Fizz");
		dev = 1;
	}
	if (number % 5 == 0)
	{
		printf("Buzz");
		dev = 1;
	}
	if (dev == 0)
	{
		printf("%d", number);
	}
	dev = 0;
	printf(" ");
}
printf("\n");
return (0);
}
