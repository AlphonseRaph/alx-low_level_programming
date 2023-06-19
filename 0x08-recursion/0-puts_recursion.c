#include "main.h"
#include <stdio.h>

/*
 * printchar -  function that prints a string
 *
 * @s: pointer to string
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
	printchar(s + 1);
}

/*
 * _puts_recursion - function that prints a string
 *
 * @s: pointer to a string
 *
 * Return: nothing
 *
 */

void _puts_recursion(char *s)
{
	printchar(s);
	printf("\n");
}

