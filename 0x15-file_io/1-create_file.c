#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	size_t content_length = strlen(text_content);

	if (fwrite(text_content, sizeof(char), content_length, fp) != content_length)
	{
		fclose(fp);
		return (-1);
	}
	}

	if (fclose(fp) != 0)
	{
		return (-1);
	}
	return (1);
}
