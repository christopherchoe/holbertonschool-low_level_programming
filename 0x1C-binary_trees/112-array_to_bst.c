#include "binary_trees.h"

/**
 * bst_array_to_bst - create bst from an array
 *
 * @array: array with values
 * @size: size of array
 * Return: pointer to root node or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root;

	if (array == NULL || size == 0)
		return (NULL);

	root = binary_tree_node(NULL, array[0]);

	for (i = 1; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
