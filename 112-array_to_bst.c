#include "binary_trees.h"

/**
 * array_to_bst - A function that builds a Binary
 * Search Tree from an array
 * @array: The input array
 * @size: The size of array
 * Return: A pointer to the root node of the new Binary Search Tree,
 * or NULL upon failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}
