#include "main.h"

/**
 * create_file - creates a file with certain permissions
 * @filename: the file's name to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filde;
	size_t written_byte;

	if (filename == NULL)
		return (-1);

	filde = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (filde < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(filde);
		return (1);
	}

	written_byte = write(filde, text_content, strlen(text_content));
	if (written_byte != (size_t)-1 && written_byte != strlen(text_content))
	{
		close(filde);
		return (-1);
	}
	close(filde);
	return (1);
}
