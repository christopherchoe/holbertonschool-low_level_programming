#include "binary_trees.h"

/**
  * binary_tree_rotate_left - rotates a tree to the left
  *
  * @tree: tree to rotate
  * Return: rotated tree root
  */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);

	new_root = tree->right;
	tree->parent = new_root;

	if (new_root != NULL)
	{
		tree->right = NULL;
		new_root->parent = NULL;
		if (new_root->left != NULL)
		{
			new_root->left->parent = tree;
			tree->right = new_root->left;
		}
		new_root->left = tree;
	}
	return (new_root);
}
