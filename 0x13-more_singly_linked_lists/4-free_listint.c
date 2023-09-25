#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free the list nodes
 * @head: the pointer to the node's head
 * Return: 0 if successful
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
