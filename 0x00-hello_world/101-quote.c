#include <unistd.h>
#include <string.h>

/**
 * main - This is the entry point
 * Description: Prints a specific character to standard error
 * Return: It will return 1 signifying an error
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, strlen(message));

	return (1);
}
