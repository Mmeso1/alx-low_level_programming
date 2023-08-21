#include "main.h"
#include <string.h>

/**
 * _strcpy - Copy a string
 * @src: pointer to string
 * @dest: Destination value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
