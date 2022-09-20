#include "main.h"
#include <stdio.h>

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
	char leng;
	int g;

	leng = strlen(*s);
	for(g = leng-1; g >= 0; g--)
		putchar(*s[g]);
	putchar('\n');
}
