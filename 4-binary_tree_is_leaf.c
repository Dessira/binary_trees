#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if node is a leaf.
 * @node: Pointer to node to check
 * Return: int 1 if it is a leaf else 0
 * Description: function checks if the given node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL || node->right == NULL)
		return (1);
	return (0);
}
