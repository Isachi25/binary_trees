#include "binary_trees.h"

/**
 * bst_insert - A function that inserts a value in a
 * Binary Search Tree
 * @tree: A double pointer to the root of the tree
 * @value: The input value
 * Return: A pointer to the new node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *bt = NULL, *node;

	if (!tree)
		return (NULL);
	bt = calloc(1, sizeof(bst_t));
	if (!bt)
		return (NULL);
	bt->n = value;

	if (!*tree)
	{
		*tree = bt;
		return (bt);
	}
	node = *tree;
	while (true)
	{
		if (value == node->n)
		{
			free(bt);
			return (NULL);
		}
		if (value < node->n)
		{
			if (!node->left)
			{
				bt->parent = node;
				return (node->left = bt);
			}
			node = node->left;
		} else
		{
			if (!node->right)
			{
				bt->parent = node;
				return (node->right = bt);
			}
			node = node->right;
		}
	}
}
