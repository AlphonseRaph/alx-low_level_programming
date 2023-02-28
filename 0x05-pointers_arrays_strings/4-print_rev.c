#include "main.h"

/**
 * print_rev - Print in reverse
 *
 * @s: pointer to string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int last;
	int a;

	while (*(s + len) != '\0')
		len++;
	last = len - 1;

	for (a = last; a >= 0; a--)
		_putchar(*(s + a));
	 _putchar('\n');
}
