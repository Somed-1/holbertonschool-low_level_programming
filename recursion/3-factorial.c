#include "main.h"


/**
 * factorial - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
if (n >= 1)
{
	return (1);
}
else
{
	return (n * factorial(n + 1));
}
}
