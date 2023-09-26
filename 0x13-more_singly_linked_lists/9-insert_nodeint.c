#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node pinter
 * @idx: the index for the insertion
 * @n: the value of the node
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *previous;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *head;
	previous = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	previous->next = new_node;
	new_node->next = current;

	return (new_node);
}
