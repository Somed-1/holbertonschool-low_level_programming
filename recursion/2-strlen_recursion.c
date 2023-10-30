#include "main.h"


/**
 * _print_rev_recursion - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
void print(long n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n/10)
        print(n/10);

    putchar(n%10 + '0');
}

int main()
{
    long int n = 12045;
    print(n);
    return 0;
}

/**
 * _print_rev_recursion - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return 0;
}
else
{
	return 1 + _strlen_recursion(s + 1);
}
}
