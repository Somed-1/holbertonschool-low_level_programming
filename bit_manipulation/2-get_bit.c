#include "main.h"

/**
 * get_bit - gets value of bit
 * @n: number
 * @index: incex of bit
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	return (n & 1);
}
