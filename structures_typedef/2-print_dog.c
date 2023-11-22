#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: struct inself
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name != NULL ? d->name : "(nil)";
		double age = d->age;
		char *owner = d->owner != NULL ? d->owner : "(nil)";


		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}
