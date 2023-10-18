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
printf("%ld, %ld, ", a, b);
for (i = 0; i < 51; i++)
{
	temp = a + b;
	a = b;
	b = temp;
	printf("%ld", b);
	if (i != 50)
	{
		printf(", ");
	}
}
printf("\n");
return (0);
}
