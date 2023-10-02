#include "main.h"
/**
 * handle_error - to exit with error and status
 * @exit_code: ...
 * @error_msg: ...
 * @file_name: ....
 * Return: nothing
 */
void handle_error(int exit_code, const char *error_msg, const char *file_name)
{
	if (file_name == NULL || file_name[0] == '\0')
		dprintf(STDERR_FILENO, "Error: %s\n", error_msg);
	else
		dprintf(STDERR_FILENO, "Error: %s %s\n", error_msg, file_name);
	exit(exit_code);
}

/**
 * copy_file - .....
 * @source_file: .....
 * @destination_file: ....
 */
void copy_file(const char *source_file, const char *destination_file)
{
	int fd_source, fd_dest;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_source = open(source_file, O_RDONLY);
	if (fd_source == -1)
		handle_error(EXIT_READ_ERROR, "Can't read from file", source_file);

	fd_dest = open(destination_file, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_dest == -1)
	{
		close(fd_source);
		handle_error(EXIT_WRITE_ERROR, "Can't write to file", destination_file);
	}

	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_source);
			close(fd_dest);
			handle_error(EXIT_WRITE_ERROR, "Can't write to file", destination_file);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_source);
		close(fd_dest);
		handle_error(EXIT_READ_ERROR, "Can't read from file", source_file);
	}
	if (close(fd_source) == -1 || close(fd_dest) == -1)
		handle_error(EXIT_CLOSE_ERROR, "Can't close fd", "");
}

/**
 * main - the entry point
 * @argc: the arg count
 * @argv: the arg vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	const char *source_file = argv[1];
	const char *destination_file = argv[2];

	if (argc != 3)
	{
		handle_error(EXIT_USAGE, "Usage: cp file_from file_to", "");
	}
	copy_file(source_file, destination_file);
	return (0);
}
