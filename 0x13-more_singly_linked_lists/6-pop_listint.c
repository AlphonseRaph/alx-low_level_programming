#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: double pointer to list
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}

