#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 52, i;
unsigned long fib[52];

fib[0] = 0;
fib[1] = 1;

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 2; i < n; i++)
{
if (i < 51)
{
printf("%lu, ", fib[i]);
}
else
{
printf("%lu", fib[i]);
}
}

printf("\n");
return (0);
}
