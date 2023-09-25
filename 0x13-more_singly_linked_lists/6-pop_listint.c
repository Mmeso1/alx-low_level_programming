#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * @head: pointer to the node head pointer
 * Return: the head node’s data (n) or if empty  return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
