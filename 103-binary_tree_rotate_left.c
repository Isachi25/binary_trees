#include "binary_trees.h"

/**
 * binary_tree_rotate_left - A function that performs a left-rotation
 * on a binary tree
 * @tree: A pointer to the root of the tree
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *root_parent;
	int root_leftchild = false;

	if (!tree)
		return (NULL);
	tmp = tree->right;
	if (tmp)
	{
		root_parent = tree->parent;
		if (root_parent)
			root_leftchild = tree->parent->left == tree;

		tree->right = tmp->left;
		if (tmp->left)
			tmp->left->parent = tree;
		tree->parent = tmp;

		tmp->left = tree;
		tmp->parent = root_parent;
		if (root_parent)
		{
			if (root_leftchild)
				root_parent->left = tmp;
			else
				root_parent->right = tmp;
		}
	}
	while (tree->parent)
		tree = tree->parent;
	return (tree);
}
