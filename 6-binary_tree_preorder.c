#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse the tree from up to down, left to right
 * @tree: pointer to node
 * @func: function to apply to each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
