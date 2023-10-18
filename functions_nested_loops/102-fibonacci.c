#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int temp;
int i;
a = 1;
b = 2;
printf("%d, %d", a, b);
for (i = 0; i < 51; i++)
{
	temp = a + b;
	a = b;
	b = temp;
	printf("%d", b);
	if (i != 50)
	{
		printf(", ");
	}
}
printf("\n");
return (0);
}
