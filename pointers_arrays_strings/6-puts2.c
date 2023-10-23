#include "main.h"
/**
 * puts2 - Entry point
 *
 *@str: int
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int len = 0;
int i = 0;

while (str[len] != '\0')
len++;

for (i = 0; i <= len - 1; i++)
if (i % 2 == 0 || i == 0)
_putchar(str[i]);

_putchar('\n');
}
