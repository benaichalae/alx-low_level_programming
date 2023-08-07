#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to a file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, bytes_read, bytes_write;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buf, letters);
	bytes_write = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fd);
	return (bytes_write);
}
