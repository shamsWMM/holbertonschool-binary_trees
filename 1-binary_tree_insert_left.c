#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left node
 * @parent: pointer to parent node
 * @value: value of node
 *
 * Return: pointer to new node if successful, NULL otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

  	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	if ((*parent).left)
	{
		(*node).left = (*parent).left;
		(*((*parent).left)).parent = node;
	}
	else
		(*node).left = NULL;

	(*node).n = value;
	(*node).parent = parent;
	(*node).right = NULL;
	(*parent).left = node;
	return (node);
}
