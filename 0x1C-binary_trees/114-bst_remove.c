#include "binary_trees.h"

bst_t *remove_node(bst_t *root);
bst_t *bst_remo(bst_t *root, int value);

/**
 * bst_remove - remove a value in a bst
 *
 * @root: tree to search through
 * @value: value to find
 * Return: pointerto node or NULL on failure
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *to_free = NULL;

	if (root == NULL)
		return (NULL);

	to_free = bst_remo(root, value);

	if (root->right && root->right->parent == NULL)
		root = root->right;
	if (to_free != NULL)
		free(to_free);
	return (root);
}

/**
 * bst_remo - helper function for removing
 *
 * @root: tree to search through
 * @value: value to find
 * Return: pointer to node to delete
 */
bst_t *bst_remo(bst_t *root, int value)
{
	bst_t *to_remove;

	to_remove = NULL;

	if (root == NULL)
		return (NULL);

	if (value == root->n)
	{
		to_remove = remove_node(root);
	}
	else if (value > root->n)
	{
		if (root->right != NULL)
			to_remove = bst_remo(root->right, value);
	}
	else if (value < root->n)
	{
		if (root->left != NULL)
			to_remove = bst_remo(root->left, value);
	}
	return (to_remove);
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

	new_root = NULL;

	if (root->left && root->right)
	{
		new_root = root->right;
		while (new_root->left != NULL)
			new_root = new_root->left;
		if (new_root->parent->left == new_root)
			new_root->parent->left = NULL;
		else
			new_root->parent->right = NULL;
		new_root->right = root->right;
		root->right->parent = new_root;
		new_root->left = root->left;
		root->left->parent = new_root;
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

	if (new_root != NULL)
		new_root->parent = root->parent;
	root->right = new_root;

	return (root);
}
