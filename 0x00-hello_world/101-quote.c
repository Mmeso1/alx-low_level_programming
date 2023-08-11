#include <unistd.h>
#include <string.h>

/**
 * main - This is the entry point
 * Description: Prints a specific character to standard error
 * Return: It will return 1 signifying an error
 */
int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t length = strlen(text);

	write(STDERR_FILENO, text, length);
	return (1);
}
