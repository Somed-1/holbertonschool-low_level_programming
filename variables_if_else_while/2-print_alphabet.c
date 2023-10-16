#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower;
for (lower = 'a'; lower < 'z' + 1; lower++)
{
	putchar(lower);
}
putchar('\n');
return (0);
}
