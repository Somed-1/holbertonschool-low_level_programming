#include "main.h"
/**
 * reverse_array - Concatenate two strings, limiting the number of characters copied
 *
 * @a: Destination string
 * @n: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
void reverse_array(int *a, int n)
{
int i, temp;
i = 0;
while (i < n)
{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n] = temp;
	i++;
}
}
