#include "main.h"

/**
 * _memcpy - COpy src into dest n number of times
 * @dest: the buffer i am copying into
 * @src: the source of the bytes
 * @n: size of the src
 * Return: pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		 dest[i] = src[i];
		 i++;
	}
	return (dest);
}
