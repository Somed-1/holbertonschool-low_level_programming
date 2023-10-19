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
	while (n % i == 0)
	{
		n /= i;
	}
}
printf("%lu\n", i - 1);
return (0);
}
