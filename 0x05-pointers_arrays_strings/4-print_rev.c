#include "main.h"

/**
 * print_rev - Print 
 *
 * @leng: int 1
 * @g: int 2
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int g;

	while ((*s + len) != '\0')
		len++;
	for (g = len-1; g >= 0; g--)
		_putchar(s[g]);
	 _putchar('\n');
}
