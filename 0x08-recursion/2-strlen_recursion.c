#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: pointer to string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	unsigned int y = 0;

	if (*s)
	{
		y++;
		y += _strlen_recursion(s + 1);
	}
	return  (y);
}
