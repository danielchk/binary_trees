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
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
