#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	printf("%s", d->name);

	printf("%f", d->age);

	printf("%s", d->owner);

	return (d);
}
