#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 *
 * str: A pointer to the string whose length is to be calculated.
 *
 * Return: An integer representing the length of the input string.
 */
int _strlen(char *str)
{
int length = 0;
while (*str != '\0')
{
	length++;
	str++;
}
return (length);
}

/**
 * infinite_add - Add two numbers represented as strings.
 *
 * @a: A pointer to the first number
 * @b: A pointer to the second numbe
 * @result: A pointer to the destinat
 * @size_result: An integer
 *
 * Return: This function returns the `result`
 */
char *infinite_add(char *a, char *b, char *result, int size_result)
{
int i, j, k, carry, sum, len_a, len_b;

len_a = _strlen(a);
len_b = _strlen(b);

carry = 0;
k = 0;

for (i = len_a - 1, j = len_b - 1; i >= 0 || j >= 0; i--, j--, k++)
{
	sum = carry;
	if (i >= 0)
		sum += a[i] - '0';
	if (j >= 0)
		sum += b[j] - '0';
	result[k] = (sum % 10) + '0';
	carry = sum / 10;
}

if (k >= size_result - 1)
{
	result[k] = '\0';
	return (0);
}

if (carry)
	result[k++] = carry + '0';
result[k] = '\0';

for (i = 0, j = k - 1; i < j; i++, j--)
{
	char temp = result[i];
	result[i] = result[j];
	result[j] = temp;
}
return (result);
}

