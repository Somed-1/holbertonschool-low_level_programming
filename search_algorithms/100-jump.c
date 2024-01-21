#include "search_algos.h"


/**
 * jump_search - searchs an element
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	int step = floor(sqrt(size));
	int i, j;

	if (array == NULL)
		return (-1);

	i = 0;
	while (i < size && value > array[i])
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += step;
	}
	
	if (i > size)
		return (-1);

	printf("Value found between indexes [%d] and [%d]\n", i - step, i);

	j = i;
	while (j > 0 && value < array[j])
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		j--;
	}
	
	if (array[j] == value)
		return (j);
	return (-1);
}
