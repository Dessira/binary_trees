#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/*
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to node to check
 * Return: int 1 if it is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
