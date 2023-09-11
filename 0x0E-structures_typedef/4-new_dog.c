#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name:value of dog's name
 * @age: value of dog's age
 * @owner: value of dog's owner
 * Return: the new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pDog = malloc(sizeof(dog_t));

	if (pDog == NULL)
		return NULL;

	pDog->name = strdup(name);
	pDog->owner = strdup(owner);

	if (pDog->name == NULL || pDog->owner == NULL)
	{
		free(pDog->owner);
		free(pDog->name);
		free(pDog);
		return NULL;
	}

	p->owner = owner;
	return (pDog);
}
