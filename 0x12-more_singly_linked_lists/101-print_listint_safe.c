#include "lists.h"

/**
  * print_listint_safe - prints a linked list
  *
  * @head: head of list
  * Return: number of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, i = 0;
	const listint_t *loop;
	const listint_t *h;

	if (!head)
		exit(98);
	h = head;
	loop = head;
	while (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		while (i < n)
		{
			if (head == loop)
			{
				printf("-> [%p] %d\n", (void *) head, head->n);
				n++;
				return (n);
			}
			loop = loop->next;
			i++;
		}
		loop = h;
		i = 0;
		n++;
	}
	return (n);
}

