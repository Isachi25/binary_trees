#include "binary_trees.h"

/**
 * binary_tree_inorder -A function that goes through a binary tree
 * using in-order traversal and performs a function call on each node
 * @tree: A pointer to the tree root
 * @func: A function call to perform
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
