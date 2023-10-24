#include "main.h"
/**
 * puts_half - Entry point
 *
 *@str: int
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int len = 0;
int i = 0;
int half;

while (str[len] != '\0')
len++;

half = len / 2;

if (len % 2 == 1)
half++;

for (i = half; i <= len - 1; i++)
_putchar(str[i]);

_putchar('\n');
}
