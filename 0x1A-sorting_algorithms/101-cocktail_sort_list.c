#include "sort.h"

void swap_list(listint_t *curr, listint_t *prev, listint_t **head);

void cocktail_sort_list(listint_t **list)
{
	listint_t *cur = *list;
	int flag_end = 0;

	while(flag_end == 0)
	{
		flag_end = 1;
		while (cur->next)
		{
			if (cur->n > cur->next->n)
			{
				swap_list(cur->next, cur, list);
				flag_end = 0;
				print_list(*list);
			}
			cur = cur->next;
		}
		while (cur->prev)
		{
			if (cur->n < cur->prev->n)
			{
				swap_list(cur, cur->prev, list);
				flag_end = 0;
				print_list(*list);
			}
			cur = cur->prev;
		}
	}
}

/**
  * swap_list - swaps two members of a list
  *
  * @curr: current node
  * @prev: previous node
  * @head: head of list
  */
void swap_list(listint_t *curr, listint_t *prev, listint_t **head)
{
	listint_t *temp1 = curr->next;
	listint_t *temp2 = prev->prev;

	if (temp1 != NULL)
		temp1->prev = prev;
	if (temp2 != NULL)
		temp2->next = curr;
	curr->prev = temp2;
	prev->next = temp1;
	curr->next = prev;
	prev->prev = curr;
	if (*head == prev)
		*head = curr;
	print_list(*head);
}
