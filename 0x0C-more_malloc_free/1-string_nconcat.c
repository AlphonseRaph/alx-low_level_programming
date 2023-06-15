#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 * @n2: size of string two
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, x;
	
	while (s2)
	{
		x++;
	}
	j = 0;
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	if ( n >= x)
	{
		p = malloc(sizeof(s1) + sizeof(s2));
		if (p == NULL)
			return (NULL);
	}
	else
	{
		p = malloc(sizeof(s1) + sizeof(n));
		if (p == NULL)
			return (NULL);
	}
	for (i = 0; s1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[i] = s2[j];
		j++;
	}
	return (p);
}
