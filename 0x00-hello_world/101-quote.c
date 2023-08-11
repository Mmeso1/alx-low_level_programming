#include <unistd.h>

/**
 * main - This is the entry point
 * Description: Prints a specific character to standard error
 * Return: It will return 1 signifying an error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (1);
}
