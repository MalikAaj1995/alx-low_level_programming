#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Create a function that creates a file.
 * @filename: file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
	if (write(fd, text_content, len) != len)
	{
		close(fd);
		return (-1);
	}
	}

	if (close(fd) == -1)
	return (-1);

	return (1);
}
