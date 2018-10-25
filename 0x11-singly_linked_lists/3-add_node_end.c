#include "lists.h"

/**
  * add_node_end - adds node to end of a list
  *
  * @head: pointer to pointer to head of list
  * @str: string to copy to node
  * Return: address of new element or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *copy;
	int i;

	if (!head)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	if (str)
		node->str = strdup(str);
	node->next = NULL;
	for (i = 0; *(str + i);)
		i++;
	node->len = i;
	if (!(*head))
	{
		*head = node;
		return (node);
	}
	copy = *head;
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = node;
	return (node);
}

