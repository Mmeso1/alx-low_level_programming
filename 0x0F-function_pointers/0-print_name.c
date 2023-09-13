#include "main.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a specified function.
 * @name: the name to be printed
 * @f: the pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
