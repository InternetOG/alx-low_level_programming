#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - check the code
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *his_dog;

	his_dog = malloc(sizeof(dog_t));
	if (his_dog != NULL)
	{
		his_dog->name = name;
		his_dog->age = age;
		his_dog->owner = owner;
		return (his_dog);
	}
	else
	{
		return (NULL);
	}
	free(his_dog);
}
