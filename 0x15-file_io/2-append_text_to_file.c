#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - at the end of a file
 * @filename:the name of the file
 * @text_content: the NULL terminated string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[len] != '\0')
		len++;
	file = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);

	if (file == -1)
	{
		return (-1);
	}
	write(file, text_content, len);

	close(file);
	return (1);
}
