#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traverses a binary tree
 *
 * @tree: root of tree to traverse
 * @func: function to call for each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left == NULL && tree->right == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
