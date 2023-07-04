#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of data in list
 *
 * @head: pointer to head
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
