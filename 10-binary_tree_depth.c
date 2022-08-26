#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node
 * Return: node depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ldep = 0, rdep = 0;

	if (tree == NULL)
		return (0);
	ldep = binary_tree_depth(tree->left);
	rdep = binary_tree_depth(tree->right);
	if (ldep > rdep)
		return (ldep);
	else
		return (rdep);
}
