#include "main.h"

/**
 * set_bit - sets bit at index
 * @n: number
 * @index: index of bit
 * Return: Success 1, Failed -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift = 1;
	unsigned long int max = sizeof(unsigned long int) * 8 - 1;

	if (max < index)
		return (-1);
	shift <<= index;
	*n |= shift;
	return (1);
}
