#include "function_pointers.h"
#include <stdio.h>


void array_iterator(int *array, size_t size, void (*action))
{
	size_t i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
