#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: struct inself
 * Return: void
 */
void pritn_dog(struct dog *d)
{
	char *name = dog->name != NULL? dog->name: "nil";
	double age = dog->age;
	char *owner = dog->owner != NULL? dog->owner: "nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
