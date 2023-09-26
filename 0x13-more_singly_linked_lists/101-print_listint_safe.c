#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head, *fast_ptr = head;
	size_t count = 0;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		count++;

		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			exit(98);
		}
	}

	return (count);
}
