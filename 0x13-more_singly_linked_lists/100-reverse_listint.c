#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the pointer to the head pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *temp;

	while (current != NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	*head = prev;
	return (*head);
}
