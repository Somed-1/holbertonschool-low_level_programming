#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
void *result = malloc(b);
if (result == NULL)
{
	exit(98);
}
return (result);
}
