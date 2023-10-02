#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters to be printed
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filde;
	char buffer[1024];
	ssize_t read_bytes, written_bytes;
	size_t count = 0;

	if (!filename)
		return (0);
	filde = open(filename, O_RDONLY);
	if (!filde)
		return (0);

	while (count < letters)
	{
		read_bytes = read(filde, buffer, sizeof(buffer));

		if (read_bytes <= 0)
			break;

		if (count + read_bytes > letters)
			read_bytes = letters - count;

		written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

		if (written_bytes <= 0 || written_bytes != read_bytes)
			break;
		count += read_bytes;
	}
	close(filde);
	return (count);
}
