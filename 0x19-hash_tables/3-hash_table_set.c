#include "hash_tables.h"

/**
  * hash_table_set -adds an element to the hash table
  *
  * @ht: hash table pointer
  * @key: the key to add element to
  * @value: the value for the element being added
  * Return: 1 for success, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (key == NULL || *key == '\0' || ht == NULL || ht->array == NULL)
		return (0);


	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
