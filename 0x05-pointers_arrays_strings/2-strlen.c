#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns length of a string
 *
 *@s: char
 *
 * Return: 0 Always
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
