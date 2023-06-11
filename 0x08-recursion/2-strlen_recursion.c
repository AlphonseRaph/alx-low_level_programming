#include <stdio.h>
#include "main.h"

/**
 * strlen_recursion - returns the length of a string.
 *
 * s: pointer to string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	unsigned int y, x;
	if (*s == '\0')
	{
		return;
	}
	x = x + 1;
	return  y + _strlen_recursion(s+x)
}
