#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  *
  * @ht: hash table to print
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (flag != 0 && tmp != NULL)
			printf(", ");
		while (tmp != NULL)
		{
			flag = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			if (tmp != NULL)
				printf(", ");
		}
	}

	printf("}\n");
}
