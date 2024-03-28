#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst - A helper function for binary_tree_is_bst
 * @tree: A pointer to the tree node
 * @min: min value of BST tree
 * @max: max value of BST tree
 * Return: 1 if true or 0 if false
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (is_bst(tree->left, min, tree->n - 1) &&
		is_bst(tree->right, tree->n + 1, max));
}


/**
 * binary_tree_is_bst - A function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: A pointer to the root of the tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
