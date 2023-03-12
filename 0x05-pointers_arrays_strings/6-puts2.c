#include "main.h"

/**
 * puts2 - print every character,starting with the 1st,followed by a newline
 *
 * @str: pointer to string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int len;
	int a;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	for (a = 0; a < len;)
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}


