#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long int a;
long long int b;
long long int temp;
int i;
a = 1;
b = 2;
printf("%lld, %lld, ", a, b);
for (i = 0; i < 51; i++)
{
	temp = a + b;
	a = b;
	b = temp;
	printf("%lld", b);
	if (i != 50)
	{
		printf(", ");
	}
}
printf("\n");
return (0);
}
