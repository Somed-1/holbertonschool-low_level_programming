#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * free_dog - function name
 * @d: argument
 * Return: something
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d->age);
}
