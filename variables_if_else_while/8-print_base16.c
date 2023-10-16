#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
char hex_l;

for (number = 0; number < 10; number++)
{
	putchar(48 + number);
}
for (hex_l = 'a'; hex_l < 'f' + 1; hex_l++)
{
	putchar(hex_l);
}
putchar('\n');
return (0);
}
