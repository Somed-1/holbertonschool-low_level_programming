#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int i;
unsigned long int n = 612852475143;
for (i = 2; i <= n; i++)
{
	if (n % 1 == 0)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
}
printf("%ul\n", i - 1);
return (0);
}
