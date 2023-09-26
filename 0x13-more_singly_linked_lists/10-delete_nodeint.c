#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at a given
 * index in a listint_t list
 * @head: pointer to the head of the list
 * @index: the index of the node to delete (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	previous = NULL;

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i < index || current == NULL)
		return (-1);

	if (previous != NULL)
		previous->next = current->next;
	else
		*head = current->next;

	free(current);
	return (1);
}
