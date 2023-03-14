#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer to newly allocated space
 *
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	char *p;
	int i, q;

	i = 0;
	while (str[i] != '\0')
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	for (q = 0; str[q] != '\0'; q++)
		p[q] = str[q];
	return (p);
}
