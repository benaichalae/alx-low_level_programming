#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: pointer to a terminated string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_write = write(fd, text_content, len);

	if (fd == -1 || bytes_write == -1)
		return (-1);

	close(fd);

	return (1);
}
