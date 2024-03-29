#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: pointer to string
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

