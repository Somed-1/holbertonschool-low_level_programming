#include "main.h"

/**
 * get_endianness - get endianness of system
 * Return: 1 if big, 0 if little
 */
int get_endianness(void)
{
	int n = 1;
	unsigned char *p = (unsigned char *)&n;

	return (*p);
}
