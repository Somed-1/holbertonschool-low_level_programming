#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a;
unsigned long int b;
unsigned long int temp;
int i;
a = 1;
b = 2;
printf("%lu, %lu, ", a, b);
for (i = 0; i < 48; i++)
{
	temp = a + b;
	a = b;
	b = temp;
	printf("%lu", b);
	if (i != 47)
	{
		printf(", ");
	}
}
printf("\n");
return (0);
}
