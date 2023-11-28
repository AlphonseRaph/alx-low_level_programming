#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads text file, prints it
 *
 * @filename: name of file
 * @letters: no of letters
 *
 * Return: no of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(letters);
	ssize_t n = 0;
	int fd;

	if (filename == NULL || buff == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	n = read(STDIN_FILENO, buff, letters);
	if (n == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	write(STDOUT_FILENO, buff, letters);
	free(buff);
	close(fd);
	return (n);
}
