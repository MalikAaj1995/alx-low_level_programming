#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *err_exit - return the value of a specific error
 *@exit_code: exit
 *@format: format of the error message
 *@arg: the specific argument caused the error
 *
 */
void err_exit(int exit_code, char *format, char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}
/**
 * main - cp file_from file_to
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 in success
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int bytes_read = 1024, bytes_written;
	int  fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		err_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
		err_exit(99, "Error: Can't write to file %s\n", argv[2]);
	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buf, 1024);
		if (bytes_read < 0)
		{
			err_exit(98, "Error: Can't read from file %s\n", argv[1]);
		}
		bytes_written = write(fd_to, buf, 1024);
		if (bytes_written < 0)
		{
			err_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
