#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - appends text end of file
 *
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1 (success) -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t x;
	int y;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[y] != '\0')
		{
			y++;
		}
		x = write(fd, text_content, y);
		if (x == -1)
		{
			return (-1);
		}
	}
	return (1);
}
