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

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
 * funclvl - do the funct in the specific lvl
 * @tree: root node
 * @lvl: level node to funct
 * @func: function
 * Return: nothing
 */
void funclvl(const binary_tree_t *tree, size_t lvl, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (lvl == 1)
		func(tree->n);

	else if (lvl > 1)
	{
		funclvl(tree->left, lvl - 1, func);
		funclvl(tree->right, lvl - 1, func);
	}
}

/**
 * binary_tree_levelorder - level-order traversal
 * @tree: root node
 * @func: function
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
		funclvl(tree, i, func);
}
