#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of a binary tree node
 *
 * @node: node to find sibling of
 * Return: pointer to node, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;


	if (parent->left != NULL && parent->right == NULL)
		return (NULL);

	if (parent->right != NULL && parent->left == NULL)
		return (NULL);

	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
