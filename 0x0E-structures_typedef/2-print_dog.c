#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print dog struct values
 * @d: the pointer to the struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age > 0 ? d->age : 0);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
