#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialiing dog
 * @d: struct variable
 * @name: string char
 * @age: int type
 * @owner: owner
 * Return: Always 0.
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
