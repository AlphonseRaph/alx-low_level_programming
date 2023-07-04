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
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newNode->next = temp->next;
	temp = newNode;
	return (newNode);
}
