#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 *
 * @tree: root of tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	delete_node(tree);
}

/**
  * delete_node - recursively deletes a binary tree
  *
  * @node: node to delete
  * Return: void
  */
void delete_node(binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		free(node);
		return;
	}
	if (node->left != NULL)
		delete_node(node->left);
	if (node->right != NULL)
		delete_node(node->right);
	free(node);
}
