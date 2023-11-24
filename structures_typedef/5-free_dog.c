#include "dog.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void free_dog(dot_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d->age);
}
