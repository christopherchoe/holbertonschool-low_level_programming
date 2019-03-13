#include "binary_trees.h"

binary_tree_t *b_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - find uncle of a binary tree node
 *
 * @tree: root of tree to traverse
 * Return: pointer to node, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (b_tree_sibling(node->parent));
}

/**
  * b_tree_sibling - find the sibling of the node
  *
  * @node: node to find sibling of
  * Return: pointer to sibling or NULL if fail
  */
binary_tree_t *b_tree_sibling(binary_tree_t *node)
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
