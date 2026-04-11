#include "binary_trees.h"

/**
 * binary_tree_nodes - number of nodes within tree
 * @tree: pointer to node
 *
 * Return: size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
