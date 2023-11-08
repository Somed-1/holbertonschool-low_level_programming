#include <stdlib.h>
/**
 * malloc_checked - Entry point
 *
 * @b: int
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
char *result = malloc(sizeof(char) * b);
if (result == NULL)
{
	exit(98);
}
return (result);
}
