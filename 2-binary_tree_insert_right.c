#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/*
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the left child
 * @value: value to be added to node
 * Return: Pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new;
        new = malloc(sizeof(binary_tree_t));
        if (parent == NULL || new == NULL)
                return (NULL);
        if (new != NULL)
        {
                new->parent = parent;
                new->n = value;
        }
        if (parent->right == NULL)
        {
                parent->right = new;
        }
        else
        {
                new->right = parent->right;
                parent->right->parent = new;
                parent->right =  new;
        }
        return (new);
}
