#include "main.h"
#include <string.h>

/**
 * *_strncat - Concatenates two strings based off one's bytes
 * @dest: destination string
 * @src: source string
 * @n: the limit of the concatenation
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	return(strncat(dest, src, n));
}
