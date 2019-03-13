#include "binary_trees.h"

/**
 * binary_tree_nodes - find nodes of a binary tree with children
 *
 * @tree: root of tree to traverse
 * Return: height of tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 1;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
		nodes += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
