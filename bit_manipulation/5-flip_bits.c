#include "main.h"

/**
 * flip_bits - flip bits
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped)
	{
		count += flipped & 1;
		flipped >>= 1;
	}
	return (count);
}
