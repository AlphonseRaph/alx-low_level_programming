#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 *
 * @s: pointer to a string
 *
 * Return: nothing
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

