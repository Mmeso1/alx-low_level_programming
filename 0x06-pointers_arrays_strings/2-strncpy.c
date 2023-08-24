#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string from a src to a dest
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
