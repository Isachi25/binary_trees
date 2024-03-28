#include "binary_trees.h"

/**
 * bst_search - A function that searches for a value in
 * a Binary Search Tree
 * @tree: A pointer to the root of the tree
 * @value: The input value
 * Return: A pointer to the node with a value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		tree = value < tree->n ? tree->left
							   : tree->right;
	}
	return ((bst_t *)tree);
}
