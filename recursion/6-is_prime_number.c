#include "main.h"


/**
 * rec_prime - Entry point
 *
 *@a: int
 *@b: int
 *
 * Return: Always 0 (Success)
 */
int rec_prime(int a, int b)
{
if (b % a == 0 || b % (a + 2) == 0)
{
	return (0);
}
if (a * a <= b)
{
	a += 6;
return rec_prime(a, b);
}
else
{
	return (1);
}
}

/**
 * is_prime_number - Entry point
 *
 *@n: int
 *
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
if (n <= 1)
{
	return (0);
}
if (n <= 3)
{
	return (1);
}

if (n % 2 == 0 || n % 3 == 0)
{
	return (0);
}

return (rec_prime(5, n));
}

