#include "main.h"
/**
 * _atoi - Entry point
 *
 *@s: string
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
int c = 0;
unsigned int n = 0;
int min = 1;
int is = 0;

while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
is = 1;
n = (n * 10) + (s[c] - '0');
c++;
}

if (is == 1)
{
break;
}

c++;
}

n *= min;
return (n);
}
