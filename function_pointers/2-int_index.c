#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function
 * @array: arr
 * @size: int
 * @cmp: function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	i = -1;
	while (i++ < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
