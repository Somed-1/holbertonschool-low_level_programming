#include "main.h"
/**
 * print_diagsums - Concatenate two strings, limiting
 *
 * @a: Destination string
 * @size: int
 *
 * Return: Pointer to the concatenated string
 */
void print_diagsums(int *a, int size)
{
int i, sum, sum2;
sum = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
	sum1 += a[i * size + i];
	sum2 += a[i * size + (size - i - 1)];
}
}
