#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *
 * @size: int
 * @c: char
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
	return (NULL);
}
char *result = malloc(sizeof(char)*size);
if (result == NULL)
{
	return (NULL);
}

return (result);
}
