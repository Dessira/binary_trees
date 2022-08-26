#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
size_t maximus(size_t one, size_t sec);
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root of the tree
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	size_t holder = 1;
	return (maximus(binary_tree_height(tree->left), binary_tree_height(tree->right)) + holder);
}
/**
 * maximus- Returns the maximum of two numbers
 * @one: first number
 * @sec: decond number
 * Return: larger number
 */
size_t maximus(size_t one, size_t sec)
{
	if (one > sec)
		return (one);
	else
		return (sec);
}
