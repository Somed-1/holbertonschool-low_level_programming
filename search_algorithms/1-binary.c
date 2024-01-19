#include "search_algos.h"


/**
 * binary_search - searchs for element
 * @array: array
 * @size: size of array
 * @value: value
 * Return: value's index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	int middle;
	size_t k;

	if (!array)
	{
		return (-1);
	}

	while (right >= left)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array: ");
		for (k = left; k < right; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);
		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;

	}
	return (-1);
}
