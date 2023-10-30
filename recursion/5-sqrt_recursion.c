#include "main.h"


/**
 * _sqrt_recursion - Entry point
 *
 *@n: int
 *
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
if (n * n == n)
{
	return (n);
}
_sqrt_recursion(n-1);
}
