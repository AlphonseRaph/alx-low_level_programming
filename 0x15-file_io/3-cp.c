#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
#define ARG_ERR "Usage: cp file_from file_to"
/**
 * main - main function
 *
 * @argc: no of args
 * @argv: pointer to args
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int f_to, f_from, f_close, w, r;
	char buff[1024];

	if (argc != 3)
		dprinf(STDERR_FILENO, ARG_ERR), exit(97);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		r = read(f_from, buff, 1024);
		if (r > 0)
		{
			w = write(f_to, buff, r);
			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		}
		else
			break;
	}
	f_close = close(f_from);
	if (f_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	f_close = close(f_to);
	if (f_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}
