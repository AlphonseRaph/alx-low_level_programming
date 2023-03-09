#include "main.h"

/**
* _puts_recursion - prints a string followed by a newline#
*
* @s: string
*/

void _puts_recursion(char *s)
{
	while (*s)
	{
	_putchar(s[index]);
	index++;
		if (*s != '\0')
		{	
			_puts_recursion((s++));
		}
	_putchar('\n');
	}
}
