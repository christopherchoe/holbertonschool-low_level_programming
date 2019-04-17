#include "search_algos.h"

/**
  * jump_list - searches for value in sorted list of integers
  *
  * @list: list to search
  * @size: size of list
  * @value: value to search for
  * Return: pointer to node with desired value or NULL if not found
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp = NULL;
	size_t i, jump, end;

	jump = (int)sqrt(size);
	i = jump;

	if (list == NULL || size == 0)
		return (NULL);

	while (i < size + jump)
	{
		tmp = list;
		while (i != list->index && list->next)
			list = list->next;
		end = i == size ? size - 1 : i;
		printf("Value checked at index [%lu] = [%d]\n", end, list->n);
		if (list->n == value)
			return (list);
		if (i >= size || list->n > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, end);
			while (tmp && tmp->index <= list->index)
			{
				printf("Value checked at index [%lu] = [%d]\n", i++ - jump, tmp->n);
				if (tmp->n == value)
					return (tmp);
				tmp = tmp->next;
			}
		}
		i += jump;
	}
	return (NULL);
}
