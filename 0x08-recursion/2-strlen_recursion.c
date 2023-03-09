#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: string
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*(s + length) != '\0')
	{
		length++;
		_strlen_recursion(char *s);
	}
	return (length);
return (0);
}
