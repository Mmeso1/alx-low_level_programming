#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * dog - typedef for dog struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
