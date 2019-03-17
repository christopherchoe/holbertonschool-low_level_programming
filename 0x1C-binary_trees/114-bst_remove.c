#include "binary_trees.h"

bst_t *remove_node(bst_t *root);

/**
 * bst_remove - remove a value in a bst
 *
 * @root: tree to search through
 * @value: value to find
 * Return: pointer to node or NULL on failure
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *to_remove;

	if (root == NULL)
		return (NULL);
	
	if (value == root->n)
	{
		to_remove = remove_node(root);
	}
	else if (value > root->n)
	{
		if (root->right != NULL)
			to_remove = bst_remove(root->right, value);
		else
			return (NULL);
	}
	else if (value < root->n)
	{
		if (root->left != NULL)
			to_remove = bst_remove(root->left, value);
		else
			return (NULL);
	}
	if (to_remove == NULL)
		return (NULL);
	if (to_remove->parent == NULL)
		return (to_remove);
	return (root);
}

/**
 * remove_node - removes specified node
 *
 * @root: node to remove
 * Return: pointer to new node in spot
 */
bst_t *remove_node(bst_t *root)
{
	bst_t *new_root;

	if (root->left && root->right)
	{
		new_root = root->right;
		while (new_root->left != NULL)
			new_root = new_root->left;
		new_root->parent->left = NULL;
		new_root->right = root->right;
		new_root->left = root->left;
	}
	else if (root->left)
	{
		new_root = root->left;
	}
	else if (root->right)
	{
		new_root = root->right;
	}
	if (root->parent != NULL)
	{
		if (root->parent->left == root)
			root->parent->left = new_root;
		else
			root->parent->right = new_root;
	}
	new_root->parent = root->parent;
	free(root);
	return (new_root);
}
