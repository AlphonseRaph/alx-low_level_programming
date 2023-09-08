#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: constant sting
 *
 * Return: lenght of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while ((*s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - add text at EOF
 *
 * @filename: path to file
 * @text_content: content to add
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, b;
	ssize_t n;

	if (!filename)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fp);
		return (1);
	}
	b = _strlen(text_content);
	n = write(fp, text_content, b);
	if (n == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}

