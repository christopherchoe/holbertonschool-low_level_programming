#include "binary_trees.h"

/**
 * bst_search - search for a value in a bst
 *
 * @tree: tree to search through
 * @value: value to find
 * Return: pointer to node or NULL on failure
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	
	if (value == tree->n)
		return ((bst_t *)tree);

	if (value > tree->n)
	{
		if (tree->right != NULL)
			return (bst_search(tree->right, value));
	}
	if (value < tree->n)
	{
		if (tree->left != NULL)
			return (bst_search(tree->left, value));
	}
	return (NULL);
}
