#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a new allocated space
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, y;
	char *p;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	p = malloc(sizeof(*s1) + sizeof(*s2));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}
	for (y = 0; s2[y]; y++)
	{
		p[i] = s2[y];
		i++;
	}
	return (p);
}
