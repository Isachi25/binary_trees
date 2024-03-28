#include "binary_trees.h"

/**
 * _binary_tree_height - A helper function for the binary_tree_height
 * @tree: The input tree
 * Return: The height of the tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return (MAX(a, b) + 1);
}

/**
 * binary_tree_balance - A function that measures the balance
 * factor of a binary tree
 * @tree: The input tree
 * @min: min value of n
 * @max: max value of n
 * Return: 1 (true), or 0 (false), otherwise return the balance
 * factor of the descendants
 */
int is_balanced_bst(const binary_tree_t *tree, int min, int max)
{
	int a, b;

	if (!tree)
		return (1);

	a = (tree->left)
		? (int)_binary_tree_height(tree->left)
		: 0;
	b = (tree->right)
		? (int)_binary_tree_height(tree->right)
		: 0;
	if (abs(a - b) > 1)
		return (0);
	if (tree->n < min || tree->n > max)
		return (0);
	return (is_balanced_bst(tree->left, min, tree->n - 1) &&
		is_balanced_bst(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree
 * @tree: A pointer to the root of the tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_balanced_bst(tree, INT_MIN, INT_MAX));
}
