#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_grid - Entry point
*
* @height: int variable
*
* @grid: int array
*
* Return: Always 0 (Success)
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);

}
