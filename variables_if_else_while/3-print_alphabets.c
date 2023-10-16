#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower;
char upper;

for (lower = 'a';lower<'z'+1;lower++)
{
	putchar(lower);
}
for (upper = 'A';upper<'Z'+2;upper++)
{
	putchar(upper);
}
return (0);
}
