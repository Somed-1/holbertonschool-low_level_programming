#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Entry point
 *
 * @width: char string
 * @height: char strign
 *
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
int *result;
int i;
result = malloc(sizeof(int) * width * height);
if (result == NULL)
{
	return (NULL);
}
for (i = 0; i < width * height; i++)
{
	result[i] = 0;
}
return (result);
}
