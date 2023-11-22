#include "dog.h"
#include <stdio.h>

/**
 * new_dog - new function
 * @name: string
 * @age: float
 * @owner: string
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new = {name, age, owner};
	return (new);
}
