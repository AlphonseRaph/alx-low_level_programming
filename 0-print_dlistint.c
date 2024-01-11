#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint -  prints all the elements of list
 *
 * @h: head node
 *
 * Return: no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
