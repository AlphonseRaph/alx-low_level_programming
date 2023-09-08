#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file
 *
 * @filename: pathname
 * @letters: no of letters
 *
 * Return: no of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t n, x;
	int fp;

	if (!filename)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fp);
		return (0);
	}
	x = read(fp, buff, letters);
	if (x == -1)
	{
		close(fp);
		return (0);
		free(buff);
	}
	n = write(STDOUT_FILENO, buff, x);
	if (n == -1)
	{
		close(fp);
		free(buff);
		return (0);
	}
	close(fp);
	return (x);
}
