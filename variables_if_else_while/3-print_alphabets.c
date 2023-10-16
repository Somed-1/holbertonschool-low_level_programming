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

for (lower = 'a'; lower < 'z' + 1; lower++)
{
	putchar(lower);
}
for (upper = 'A'; upper < 'Z' + 1; upper++)
{
	putchar(upper);
}
putchar('\n');
return (0);
}
