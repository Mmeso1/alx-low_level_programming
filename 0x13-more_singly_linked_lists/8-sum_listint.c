#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums the list
 * @head: pointer to head
 * Return: sum of all the data (n) of a listint_t linked list
 * or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
