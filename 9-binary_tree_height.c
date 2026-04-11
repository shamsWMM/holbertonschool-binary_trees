#include "binary_trees.h"

/**
 * binary_tree_height - height of tree
 * @tree: pointer to node
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t result, left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	result = left > right ? left : right;
	return (result + 1);
}
