#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters to be printed
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_pointer;
	char buffer[1024];
	size_t read_bytes;
	ssize_t count = 0;

	if (!filename)
		return (0);


	file_pointer = fopen(filename, "r");
	if (!file_pointer)
		return (0);

	read_bytes = fread(buffer, 1, sizeof(buffer), file_pointer);
	while (letters > 0 && read_bytes > 0)
	{
		if (read_bytes > letters)
			read_bytes = letters;

		fwrite(buffer, 1, read_bytes, stdout);
		count += read_bytes;
		letters -= read_bytes;
	}
	fclose(file_pointer);
	return (count);
}
