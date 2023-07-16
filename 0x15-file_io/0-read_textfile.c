#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the stderr
 * @filename: name of the file to create
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t bytesRead;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fp);
		fprintf(stderr, "Error: Memory allocation failed.\n");
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, fp);
	buffer[bytesRead] = '\0';
	if (bytesRead > 0)
	{
	ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	if ((size_t) bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	}
	free(buffer);
	fclose(fp);
	return (bytesRead);
}
