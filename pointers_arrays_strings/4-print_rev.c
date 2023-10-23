#include "main.h"

/**
 * _strlen - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}

/**
 * _print_rev - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
void _print_rev(char *s)
{
int i;
i = _strlen(s) - 1;
while (i >= 0)
{
	_putchar(s[i]);
	i--;
}
_putchar('\n');
}
