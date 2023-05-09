#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: content of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	 int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
	while (text_content[len] != '\0')
		len++;

	wr = write(fd, text_content, len);

	if (wr < 0)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);
	return (1);
}
