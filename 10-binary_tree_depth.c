#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: measure from this node
 * Return: counter
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t counter = 0;

	if (node == NULL)
		return (counter);

	if (node->parent == NULL)
		return (counter);

	while (node->parent != NULL)
	{
		counter++;
		node = node->parent;
	}

	return (counter);
}
