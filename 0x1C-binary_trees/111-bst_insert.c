#include "binary_trees.h"

/**
 * bst_insert - insert into bst
 *
 * @tree: tree to insert to
 * @value: value to insert
 * Return: pointer to created node or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value == (*tree)->n)
		return (NULL);

	if (value > (*tree)->n)
	{
		if ((*tree)->right != NULL)
			return (bst_insert(&((*tree)->right), value));
		(*tree)->right = binary_tree_node(*tree, value);
		return ((*tree)->right);
	}
	if (value < (*tree)->n)
	{
		if ((*tree)->left != NULL)
			return (bst_insert(&((*tree)->left), value));
		(*tree)->left = binary_tree_node(*tree, value);
		return ((*tree)->left);
	}
	return (NULL);
}
