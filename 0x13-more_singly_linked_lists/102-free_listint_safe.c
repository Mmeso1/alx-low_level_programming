#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = *h;

		if (next == *h)
		{
			*h = NULL;
			break;
		}
		current = next;
	}
	return (count);
}
