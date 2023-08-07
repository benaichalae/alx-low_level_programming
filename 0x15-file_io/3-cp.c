#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_file - Closes file descriptors
 * @fd: The file descriptor to be closed
 * Return: void
 */
void close_file(int fd)
{
	int bytes_close;

	bytes_close = close(fd);
	if (bytes_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int f, t, bytes_read, bytes_write;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	bytes_read = read(f, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		bytes_write = write(t, buf, bytes_read);
		if (t == -1 || bytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		bytes_read = read(f, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);

	free(buf);
	close_file(f);
	close_file(t);

	return (0);
}
