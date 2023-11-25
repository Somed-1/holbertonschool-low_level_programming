#include "function_pointers.h"

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
	if (size <= 0)
	{
		return (1);
	}
	i = 0;
	while (i++ < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
