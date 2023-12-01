#include "hash_tables.h"

/**
 * hash_table_create - too create a new hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
