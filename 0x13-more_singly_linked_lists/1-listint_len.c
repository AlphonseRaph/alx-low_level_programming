#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the no of elements
 *
 * @h: pointer to list
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
