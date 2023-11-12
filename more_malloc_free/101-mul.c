#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function multiplies two string digits
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Success (0)
 */
int main(int argc, char **argv)
{
	char *a, *b;
	int len_a, len_b, max_len;
	int *result;  // Use an array of integers to store the result
	int i, j, carry, product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	a = argv[1];
	b = argv[2];
	len_a = strlen(a);
	len_b = strlen(b);
	max_len = len_a + len_b + 1;
	result = malloc(sizeof(int) * max_len);

	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}

	for (i = 0; i < max_len; i++)
	{
		result[i] = 0;
	}

	for (i = len_a - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len_b - 1; j >= 0; j--)
		{
			product = (a[i] - '0') * (b[j] - '0') + result[i + j + 1] + carry;
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i + j + 1] += carry;
	}

	// Find the first non-zero digit
	i = 0;
	while (i < max_len && result[i] == 0)
	{
		i++;
	}

	// Print the result
	for (; i < max_len; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");

	free(result);
	return 0;
}

