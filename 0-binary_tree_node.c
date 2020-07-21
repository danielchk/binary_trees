#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a new node in a binary tree
 * @parent: parent
 * @value: value
 * Return: new_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
        return (NULL);

    new_node->parent = parent;
    new_node->n = value;
    new_node->left = new_node->right = NULL;
    return (new_node);
}
