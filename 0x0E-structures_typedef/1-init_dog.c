#include "dog.h"
#include <stdlib>

/**
 * init_dog - initialize the dog struct
 * @d: pointer to the dog struct
 * @name: the value of name
 * @age: value of age
 * @owner: value of owner
 * Return: void
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
