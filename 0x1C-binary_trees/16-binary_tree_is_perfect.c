#include "binary_trees.h"

/**
 * binary_tree_is_perfect - find perfect status of a binary tree
 *
 * @tree: root of tree to traverse
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	left = right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	if (tree->right != NULL && tree->left == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left = binary_tree_is_perfect(tree->left);
		if (!left)
			return (0);
		right = binary_tree_is_perfect(tree->right);
		if (!right)
			return (0);
	}
	if (left == right)
	{
		if (tree->parent != NULL)
			return (left + 1);
		else
			return (1);
	}
	return (0);
}
