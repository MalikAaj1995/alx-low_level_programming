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
int main(int argc, char **argv)
{
	int from, to, wr, rd = 1024;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from < 0)
		err_exit(98, "Error: Can't read from file %s\n", argv[1]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to < 0)
		err_exit(99, "Error: Can't write to file %s\n", argv[2]);
	while (rd == 1024)
	{
		rd = read(from, buf, 1024);
		if (rd < 0)
		{
			err_exit(98, "Error: Can't read from file %s\n", argv[1]);
		}
		wr = write(to, buf, rd);
		if (wr < 0)
		{
			err_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (close(from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
