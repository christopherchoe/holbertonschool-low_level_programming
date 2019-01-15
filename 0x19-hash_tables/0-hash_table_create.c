#include "hash_tables.h"

/**
  * hash_table_create - creates a pointer filled hash table
  *
  * @size: size of the array
  * Return: the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
