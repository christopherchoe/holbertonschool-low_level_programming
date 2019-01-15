#include "hash_tables.h"

/**
  * hash_table_get - gets a value associated with a key
  *
  * @ht: hash table to search
  * @key: key to search hash table for
  * Return: string value of key or NULL if not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
