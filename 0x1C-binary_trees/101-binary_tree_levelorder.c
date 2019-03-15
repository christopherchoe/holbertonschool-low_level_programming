#include "binary_trees.h"

void make_levels(queue *, queue *);
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

	if (tree == NULL || func == NULL)
		return;

	first = malloc(sizeof(queue));
	if (first == NULL)
		return;

	first->n = tree;

	make_levels(first, first);

	while (first != NULL && first->n != NULL)
	{
		tmp = first;
		func(first->n->n);
		first = first->next;
		free(tmp);
	}
}

/**
 * make_levels - makes the level list
 *
 * @node: first queue member passed
 * @last: last queue member
 * Return: void
 */
void make_levels(queue *node, queue *last)
{
	queue *left, *right, *tmp;

	if (node == NULL || node->n == NULL || last->n == NULL)
		return;
	tmp = last;
	left = right = NULL;
	if (node->n->left != NULL)
	{
		left = malloc(sizeof(queue));
		if (left == NULL)
			return;
		left->n = node->n->left;
		last->next = left;
		tmp = left;
	}
	if (node->n->right != NULL)
	{
		right = malloc(sizeof(queue));
		if (right == NULL)
			return;
		right->n = node->n->right;
		right->next = NULL;
		tmp = right;
	}
	if (left != NULL)
		left->next = right;
	else
		last->next = right;
	make_levels(node->next, tmp);
}
