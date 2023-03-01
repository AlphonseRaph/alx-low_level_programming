#include "main.h"

/**
 * puts2 - print every character, starting with the first, followed by a newline
 *
 * @str: pointer to string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int len;
       	
	for (len = 0; len != '\0';)
	{
		_putchar(*(str + len));
		len = len + 2;
	}
}


