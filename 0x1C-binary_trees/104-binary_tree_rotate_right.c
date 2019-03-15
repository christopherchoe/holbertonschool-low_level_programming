#include "binary_trees.h"

/**
  * binary_tree_rotate_right - rotates a tree to the right
  *
  * @tree: tree to rotate
  * Return: rotated tree root
  */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);

	new_root = tree->left;
	tree->parent = new_root;

	if (new_root != NULL)
	{
		tree->left = NULL;
		new_root->parent = NULL;
		if (new_root->right != NULL)
		{
			new_root->right->parent = tree;
			tree->left = new_root->right;
		}
		new_root->right = tree;
	}
	return (new_root);
}
