#include "binary_trees.h"

/**
 * binary_tree_size -A function that measures the size of a binary tree
 * @tree: The input binary tree
 * Return: The number of descendant child nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
