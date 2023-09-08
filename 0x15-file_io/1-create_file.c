#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * create_file - creates a file.
 *
 * @filename: pathname
 * @text_content: string
 *
 * Return: 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	char *m;
	int fp, size;
	ssize_t x;

	if (!filename)
	{
		return (0);
	}
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fp);
		return (1);
	}
	size = _strlen(text_content);
	m = malloc(sizeof(char) * size);
	if (!m)
	{
		close(fp);
		return (-1);
	}
	x = write(fp, text_content, size);
	if (x == -1)
	{
		close(fp);
		free(m);
		return (-1);
	}
	close(fp);
	free(m);
	return (1);
}
