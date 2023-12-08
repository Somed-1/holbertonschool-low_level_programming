#include <stdio.h>

/**
 * binary_to_uint - binary to unsigned int
 * @b: binary number string
 * Return: the number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		result = result << 1 | (*b - '0');
		b++;
	}

	return (result);
}
