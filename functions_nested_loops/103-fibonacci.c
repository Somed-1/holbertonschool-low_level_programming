#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 34, i;
unsigned long fib[34];
unsigned long result = 0;

fib[0] = 0;
fib[1] = 1;

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 1; i < n; i++)
{
if (fib[i] % 2 == 0)
result += fib[i];
}

printf("%lu", result);

printf("\n");
return (0);
}
