#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and added as the content of the new node
 * Return: The address of the new element (new node), or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
