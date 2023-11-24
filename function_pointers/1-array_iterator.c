#include "function_pointers.h"
#include <stdio.h>


void array_iterator(int *array, size_t size, void (*action))
{
	while (size--)
	{
		action(*array++);
	}
}
