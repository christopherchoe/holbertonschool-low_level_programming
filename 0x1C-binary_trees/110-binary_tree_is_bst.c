#include "binary_trees.h"

int bst_min_max(const bst_t *, int, int);

/**
 * binary_tree_is_bst - checks the bst status of a tree
 *
 * @tree: tree to check
 * Return: 1 if valid bst, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bst_min_max(tree, INT_MIN, INT_MAX));
}

/**
 * bst_min_max - checks recursively the min and max of a bst
 *
 * @tree: tree to check
 * @min: min to compare
 * @max: max to compare
 * Return: 1 if valid bst, 0 otherwise
 */
int bst_min_max(const bst_t *tree, int min, int max)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (1);

	if (tree->n > min && tree->n < max)
	{
		left = bst_min_max(tree->left, min, tree->n);
		right = bst_min_max(tree->right, tree->n, max);
	}

	return (left && right);
}
