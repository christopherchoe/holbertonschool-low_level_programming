#include "binary_trees.h"

int b_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - find balance factor of a binary tree
 *
 * @tree: root of tree to traverse
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = b_tree_height(tree->left);

	if (tree->right != NULL)
		right = b_tree_height(tree->right);

	return (left - right);
}

/**
 * b_tree_height - find height of a binary tree
 *
 * @tree: root of tree to traverse
 * Return: height of tree
 */
int b_tree_height(const binary_tree_t *tree)
{
	int left, right;

	left = 0;
	right = 0;

	if (tree == NULL || (!(tree->left) && !(tree->right)))
		return (1);

	if (tree->left != NULL)
		left = b_tree_height(tree->left);

	if (tree->right != NULL)
		right = b_tree_height(tree->right);

	if (left > right)
		return (1 + left);
	return (1 + right);
}
