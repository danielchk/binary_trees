#include "binary_trees.h"

/**
 * binary_tree_sibling - fins sibling nodes
 * @node: pointer to find sibling
 * Return: sibling node or nothing if the node dont have sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
