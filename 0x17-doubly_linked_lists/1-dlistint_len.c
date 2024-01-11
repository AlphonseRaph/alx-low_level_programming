#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns no of elements in list
 *
 * @h: head of list
 *
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int no = 0;

	while (h != NULL)
	{
		no++;
		h = h->next;
	}
	return (no);
}
