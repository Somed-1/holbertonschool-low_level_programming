#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * array_range - a function that concatenates two strings.
 *
 * @min: first char
 * @max: secound char
 *
 * Return: If the function fails, it should return NULL
 */
int *array_range(int min, int max)
{
int *result;
int i;

result = malloc(max * sizeof(int));
if (result == NULL)
{
	return (NULL);
}
i = 0;
while (min != max)
{
result[i] = min;
min++;
i++;
}
return (result);
}
