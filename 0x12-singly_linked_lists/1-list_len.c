#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns no of elements in a list
 *
 * @h: pointer to list
 *
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}

