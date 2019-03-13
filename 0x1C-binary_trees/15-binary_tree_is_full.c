#include "binary_trees.h"

/**
 * binary_tree_is_full - find full status of a binary tree
 *
 * @tree: root of tree to traverse
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	if (tree->right != NULL && tree->left == NULL)
		return (0);

	if (tree->left != NULL)
	{
		if (!(binary_tree_is_full(tree->left)))
			return (0);
		if (!(binary_tree_is_full(tree->right)))
			return (0);
	}
	return (1);
}
