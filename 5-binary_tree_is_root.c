#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a given node is a root
 * @node:A pointer to the input node
 * Return: 1 if true 0 if false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->parent);
}
