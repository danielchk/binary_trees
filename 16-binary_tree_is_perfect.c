#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (binary_tree_is_leaf(tree) || tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);

	return (1 + right);
}

/**
 * binary_tree_is_perfect - search is the binary tree is perfect
 * @tree: root node
 * Return: 1 is tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *sideleft, *sideright;

	if (tree == NULL)
		return (0);

	sideleft = tree->left;
	sideright = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);

	if (sideleft == NULL || sideright == NULL)
		return (0);

	if (binary_tree_height(sideleft) == binary_tree_height(sideright))
	{
		if (binary_tree_is_perfect(sideleft) && binary_tree_is_perfect(sideright))
			return (1);
	}

	return (0);
}
