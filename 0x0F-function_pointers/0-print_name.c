#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified function.
 * @name: the name to be printed
 * @f: the pointer to the function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
