#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: no of arguments
 * @av: string of arguments
 *
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * ac);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		p[i] = av[i];
	}

	return p;
}
