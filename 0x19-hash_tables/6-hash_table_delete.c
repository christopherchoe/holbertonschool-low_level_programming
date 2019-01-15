#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table
  *
  * @ht: hash table to delete
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *nex = NULL;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			nex = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = nex;
		}
	}
	free(ht->array);
	free(ht);
}

