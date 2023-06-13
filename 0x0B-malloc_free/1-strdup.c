#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 *
 * @str: string
 *
 * Return:  a pointer if success
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(*str));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
