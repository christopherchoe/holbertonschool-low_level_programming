#include "search_algos.h"

/**
  * linear_skip - searches for value in sorted skip list of integers
  *
  * @list: skiplist to search
  * @value: value to search for
  * Return: pointer to skiplist with value or NULL if not found
  */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = list;

	if (list == NULL)
		return (NULL);
	list = list->express;

	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		if (list->n > value || list->express == NULL)
		{
			if (list->express == NULL && list->n < value)
			{
				tmp = list;
				while (list->next)
					list = list->next;
			}
			printf("Value found between indexes [%lu] and [%lu]\n",
					tmp->index, list->index);
			break;
		}
		tmp = list;
		list = list->express;
	}

	while (tmp)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
