#include "main.h"

/**
* _puts_recursion - prints a string followed by a newline#
*
* @s: string
*/

void _puts_recursion(char *s)
{
	int index = 0;

	while (*s != '\0')
	{	
		_putchar(*(s + index));
	}
	index++;
	_putchar('\n');
}
