#include "main.h"
#include <stdio.h>

/*
 * _puts_recursion -  function that prints a string
 *
 * Return: nothing
 */
void printchar(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	printchar(s+1);
}
void _puts_recursion(char *s)
{
	printchar(s);
}

