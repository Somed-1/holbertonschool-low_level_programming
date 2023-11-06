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
char *result;
unsigned int i;
if (size == 0)
{
	return (NULL);
}
result = malloc(sizeof(char) *size);
if (result == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	result[i] = c;
}
return (result);
}
