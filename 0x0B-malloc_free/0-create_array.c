#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 *
 * @size: size of array
 * @c: character
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(c) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
