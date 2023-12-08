#include "main.h"

/**
 * clear_bit - claears bit at index
 * @n: number
 * @index: index of bit
 * Return: Succes (1), Failed(-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift = 1;
	unsigned int max = sizeof(unsigned long int) * 8 - 1;

	if (max < index)
		return (-1);

	shift <<= index;
	*n &= (~shift);
	return (1);
}
