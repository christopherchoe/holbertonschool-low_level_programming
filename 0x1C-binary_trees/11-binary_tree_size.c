#include "binary_trees.h"

/**
 * binary_tree_size - find size of a binary tree
 *
 * @tree: root of tree to traverse
 * Return: height of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size += binary_tree_size(tree->left);

	if (tree->right != NULL)
		size += binary_tree_size(tree->right);

	return (1 + size);
}
