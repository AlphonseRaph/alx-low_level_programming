#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head node;
 * @idx: index
 * @n: data
 *
 * Return:  address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *temp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp2 = malloc(sizeof(dlistint_t));

	if (h == NULL && new_node == NULL && temp2 == NULL)
	{
		return (NULL);
	}
	while (x < idx - 1 && temp->next != NULL)
	{
		if (x == idx - 1 && temp->next == NULL)
		{
			return (NULL);
		}
		else
		{
			temp = temp->next;
			x++;
		}
	}
	temp2 = temp->next;
	new_node->n = n;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;
	return (new_node);
}
