#include "lists.h"

/**
 * free_list - free the list
 * @head: the first node
 * Return: 0 for success
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *prev = NULL;
	list_t *next, *temp;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	while (prev != NULL)
	{
		temp = prev;
		prev = prev->next;
		free(temp->str);
		free(temp);
	}
}
