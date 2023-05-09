#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to read
 * @letters: the number of letter should be print and read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
	{
		free(buffer);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytes_written);
}
