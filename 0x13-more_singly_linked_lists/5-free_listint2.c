#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: double pointer to list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *node;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		node = temp;
		temp = temp->next;
		free(node);
	}
	*head = NULL;
}
