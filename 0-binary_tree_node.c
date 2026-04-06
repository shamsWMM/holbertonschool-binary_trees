#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @parent: pointer to parent node
 * @value: value of node
 *
 * Return: pointer to new node if successful, NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (!result)
		return (NULL);
	(*result).n = value;
	(*result).parent = parent;
	(*result).left = NULL;
	(*result).right = NULL;
	return (result);
}
