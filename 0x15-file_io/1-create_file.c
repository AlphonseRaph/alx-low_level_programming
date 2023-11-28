#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - creates file and writes
 *
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 (Success) -1 (Fails)
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t x = 0;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		x = write(fd, text_content, i);
		if (x == -1)
		{
			return (-1);
		}
	}
	close (fd);
	return (1);
}
