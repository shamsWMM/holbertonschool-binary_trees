#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right node
 * @parent: pointer to parent node
 * @value: value of node
 *
 * Return: pointer to new node if successful, NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	if ((*parent).right)
	{
		(*node).right = (*parent).right;
		(*((*parent).right)).parent = node;
	}
	else
		(*node).right = NULL;

	(*node).n = value;
	(*node).parent = parent;
	(*node).left = NULL;
	(*parent).right = node;
	return (node);
}
