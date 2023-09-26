#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;

	while (current)
	{
		count++;
		*h = current->next;
		free(current);
		current = *h;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
