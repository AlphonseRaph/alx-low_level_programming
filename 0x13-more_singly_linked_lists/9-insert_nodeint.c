#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 *
 * @head: pointer to node
 * @idx: index of list
 * @n: data to input
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newNode;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
