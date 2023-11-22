#include <stdio.h>
#include <string.h>

/**
 * init_dog - fucntion that initialize a variavle
 * @d: pointer
 * @name: string
 * @age: float
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
