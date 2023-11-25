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
	if (size <= 0)
	{
		return (1);
	}
	while (size--)
	{
		if (cmp(array[size]))
		{
			return (size);
		}
	}
	return (-1);
}
