#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filde;
	size_t written_byte;

	if (filename == NULL)
		return (-1);
	
	filde = open(filename, O_APPEND | O_WRONLY);

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
	return(1);
}
