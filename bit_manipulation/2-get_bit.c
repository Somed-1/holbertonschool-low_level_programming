#include "main.h"

/**
 * get_bit - gets value of bit
 * @n: number
 * @index: incex of bit
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max = sizeof(unsigned long int) * 8 - 1;

	if (max < index)
		return (-1);
	n >>= index;
	return (n & 1);
}
