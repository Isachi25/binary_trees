#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The binary tree input
 * Return: The no. of descendant child nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * is_complete - A helper function for binary_tree_is_complete
 * @tree: a pointer to the root of the tree
 * @index: The index of current node
 * @size: The total number of nodes in the tree
 * Return: 1 if true 0 if false
 */
int is_complete(const binary_tree_t *tree, unsigned int index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, size) &&
		is_complete(tree->right, 2 * index + 2, size));
}


/**
 * binary_tree_is_complete - A function that checks if a binary tree is
 * complete
 * @tree: A pointer to root of tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;
	unsigned int i = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete(tree, i, size));
}
