#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* alloc_grid - Allocates memory for a 2D array of integers
*
* @width: Width of the array
* @height: Height of the array
*
* Return: Pointer to the 2D array
*/
int **alloc_grid(int width, int height)
{
int **result;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

result = malloc(sizeof(int *) * height);
if (result == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
result[i] = malloc(sizeof(int) * width);
if (result[i] == NULL)
{
for (j = 0; j < i; j++)
    free(result[j]);
free(result);
return (NULL);
}
for (j = 0; j < width; j++)
result[i][j] = 0;
}

return (result);
}

