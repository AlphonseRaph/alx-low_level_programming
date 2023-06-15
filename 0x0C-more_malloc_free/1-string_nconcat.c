#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 * @n: size of string two
 *
 * Return: a pointer to a new allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, x, y;

	i = j = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		p[x] = s1[x];
	}
	for (y = 0; y < j; y++)
	{
		p[x] = s2[y];
		x++;
	}

	return (p);
}
