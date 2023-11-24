#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array.
 * @array: the array
 * @size: size of array
 * @action: pointer to the function to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action))
{
	while (size--)
	{
		action(*array++);
	}
}
