#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - create right node
 * @parent: parent
 * @value: value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode = NULL;

	rightnode = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = rightnode;
		rightnode->right = parent->right;
	}
	parent->right = rightnode;
	return (rightnode);
}
