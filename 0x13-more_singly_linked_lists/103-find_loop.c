#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list
 * @head: Pointer to the head of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head, *tortoise = head;

	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			hare = head;
			while (hare != tortoise)
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
