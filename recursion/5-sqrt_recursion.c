#include "main.h"
/**
 * result - Entry point
 *
 *@a: int
 *@b: int
 *
 * Return: Always 0 (Success)
*/
int result(int a, int b)
{
if (a * a == b)
return (a);

if (a * a > b)
return (-1);

return (result(a + 1, b));
}
/**
* _sqrt_recursion - Entry point
*
*@n: int
*
* Return: Always 0 (Success)
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);

return (result(1, n));
}
