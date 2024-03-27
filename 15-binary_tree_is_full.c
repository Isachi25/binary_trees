#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 * @tree: A pointer to the root of tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
