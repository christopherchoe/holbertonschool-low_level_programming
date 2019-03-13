#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest ancestor of two nodes
 *
 * @first: first node
 * @second: second node
 * Return: pointer to nearest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *tmp;
	int level_1, level_2, min_level;

	level_1 = level_2 = 0;
	if (first == NULL || second == NULL)
		return (NULL);
	tmp = first;
	while (tmp->parent != NULL)
	{
		tmp = tmp->parent;
		level_1 += 1;
	}
	tmp = second;
	while (tmp->parent != NULL)
	{
		tmp = tmp->parent;
		level_2 += 1;
	}
	min_level = level_1 > level_2 ? level_2 : level_1;
	while (level_1 != min_level)
	{
		first = first->parent;
		level_1 -= 1;
	}
	while (level_2 != min_level)
	{
		second = second->parent;
		level_2 -= 1;
	}
	while (second != first && first->parent != NULL)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *) first);
}
