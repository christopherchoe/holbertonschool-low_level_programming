#include "binary_trees.h"
/**
 * binary_tree_postorder - postorder traverses a binary tree
 *
 * @tree: root of tree to traverse
 * @func: function to call for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
