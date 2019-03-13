#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest ancestor of two nodes
 *
 * @f: f node
 * @s: s node
 * Return: pointer to nearest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const bst_t *f, const bst_t *s)
{
	const binary_tree_t *tmp;
	int level_1, level_2, min_level;

	level_1 = level_2 = 0;
	if (f == NULL || s == NULL)
		return (NULL);
	tmp = f;
	while (tmp->parent != NULL)
	{
		tmp = tmp->parent;
		level_1 += 1;
	}
	tmp = s;
	while (tmp->parent != NULL)
	{
		tmp = tmp->parent;
		level_2 += 1;
	}
	min_level = level_1 > level_2 ? level_2 : level_1;
	while (level_1 != min_level)
	{
		f = f->parent;
		level_1 -= 1;
	}
	while (level_2 != min_level)
	{
		s = s->parent;
		level_2 -= 1;
	}
	while (s != f && f->parent != NULL)
	{
		f = f->parent;
		s = s->parent;
	}
	if (s == f)
		return ((binary_tree_t *) f);
	return (NULL);
}
