#include "binary_trees.h"

void make_levels(queue *, void (*func)(int));
/**
 * binary_tree_levelorder - level order traversal of tree
 *
 * @tree: tree to traverse
 * @func: function to perform on tree
 * Return: void
 */
void binary_tree_levelorder(const bst_t *tree, void (*func)(int))
{
	queue *first, *tmp;

	if (tree == NULL)
		return;

	first = malloc(sizeof(queue));
	if (first == NULL)
		return;

	first->n = tree;

	make_levels(first, func);

	while (first != NULL)
	{
		tmp = first;
		func(first->n->n);
		free(first);
		first = tmp->next;
	}
}

/**
 * make_levels - makes the level list
 *
 * @first: first queue member passed
 * @func: function to perform
 * Return: void
 */
void make_levels(queue *first, void (*func)(int))
{
	queue *left, *right, *tmp;

	if (first->n == NULL)
		return;
	tmp = first;
	left = right = NULL;
	if (first->n->left != NULL)
	{
		left = malloc(sizeof(queue));
		if (left == NULL)
			return;
		left->n = first->n->left;
		tmp = left;
	}
	if (first->n->right != NULL)
	{
		right = malloc(sizeof(queue));
		if (right == NULL)
			return;
		right->n = first->n->right;
		right->next = NULL;
		tmp = right;
	}
	if (left != NULL)
	{
		left->next = right;
		first->next = left;
	}
	else
	{
		first->next = right;
	}
	make_levels(tmp, func);
}
