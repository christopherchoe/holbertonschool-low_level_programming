#include "binary_trees.h"

int make_levels(queue *, queue *);
/**
 * binary_tree_is_complete - traverse tree to find completeness
 *
 * @tree: tree to traverse
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const bst_t *tree)
{
	queue *first, *tmp;
	int ret;

	if (tree == NULL)
		return (1);

	first = malloc(sizeof(queue));
	if (first == NULL)
		return (0);

	first->n = tree;

	ret = make_levels(first, first);

	tmp = first;
	first = first->next;
	free(tmp);
	while (first != NULL && first->n != NULL)
	{
		if (first->n->parent != NULL && first->n == first->n->parent->left)
		{
			if (first->next != NULL && first->next->n != NULL)
			{
				if (first->next->n != first->n->parent->right)
					ret = 0;
			}
		}
		tmp = first;
		first = first->next;
		free(tmp);
	}
	return (ret);
}

/**
 * make_levels - makes the level list
 *
 * @node: first queue member passed
 * @last: last queue member
 * Return: 0 on failure, 1 on success
 */
int make_levels(queue *node, queue *last)
{
	queue *left, *right, *tmp;

	if (node == NULL || node->n == NULL || last->n == NULL)
		return (1);
	tmp = last;
	left = right = NULL;
	if (node->n->left != NULL)
	{
		left = malloc(sizeof(queue));
		if (left == NULL)
			return (0);
		left->n = node->n->left;
		last->next = left;
		tmp = left;
	}
	if (node->n->right != NULL)
	{
		if (left == NULL)
			return (0);
		right = malloc(sizeof(queue));
		if (right == NULL)
			return (0);
		right->n = node->n->right;
		right->next = NULL;
		tmp = right;
	}
	if (left != NULL)
		left->next = right;
	else
		last->next = right;
	return (make_levels(node->next, tmp));
}
