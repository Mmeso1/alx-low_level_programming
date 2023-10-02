#include "main.h"
/**
 * exit_with_error - to exit with error and status
 * @exit_code: ...
 * @message: ...
 * @file_name: ....
 * Return: nothing
 */
void exit_with_error(int exit_code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, file_name);
	exit(exit_code);
}

/**
 * main - the entry point
 * @argc: the arg count
 * @argv: the arg vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to", "");
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_with_error(98, "Can't read from file", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_error(99, "Can't write to file", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			exit_with_error(99, "Can't write to file", file_to);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_with_error(98, "Can't read from file", file_from);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit_with_error(100, "Can't close fd", "");
	}
	return 0;
}
