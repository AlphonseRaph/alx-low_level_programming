#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of list
 *
 * @head: head node
 * @n: data
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next  = new_node;
	new_node->prev = temp;
	new_node->next = NULL;

	return (new_node);
}

