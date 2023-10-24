#include "main.h"
/**
 * print_chessboard - Concatenate two strings, limiting
 *
 * @a: Destination string
 *
 * Return: Pointer to the concatenated string
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
if (i != 0)
_putchar('\n');
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
}
_putchar('\n');
}
