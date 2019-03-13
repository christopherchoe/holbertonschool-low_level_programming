#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of another
 *
 * @parent: the parent node of the node to create
 * @value: value to put in new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = parent->right;
	new_node->parent = parent;

	if (parent->right != NULL)
		parent->right->parent = new_node;
	parent->right = new_node;

	return (new_node);
}
