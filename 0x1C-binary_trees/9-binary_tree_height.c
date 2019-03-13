#include "binary_trees.h"

/**
 * binary_tree_height - find height of a binary tree
 *
 * @tree: root of tree to traverse
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	left = 0;
	right = 0;

	if (tree == NULL || (!(tree->left) && !(tree->right)))
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left);

	if (tree->right != NULL)
		right = binary_tree_height(tree->right);

	if (left > right)
		return (1 + left);
	return (1 + right);
}
