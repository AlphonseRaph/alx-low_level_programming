#include <stdio.h>
#include "main.h"

/**
 * int_islower - check for lowercase character
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
