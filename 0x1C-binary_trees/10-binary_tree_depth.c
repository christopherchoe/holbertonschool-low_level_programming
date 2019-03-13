#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of a binary tree
 *
 * @tree: root of tree to traverse
 * Return: height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
