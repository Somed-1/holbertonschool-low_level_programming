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
	if (lower == 'q')
	{
		continue;
	}
	if (lower == 'e')
	{
		continue;
	}
	putchar(lower);
}
putchar('\n');
return (0);
}
