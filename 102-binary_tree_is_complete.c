#include "binary_trees.h"


/**
  * binary_tree_is_complete - checks if a binary tree is complete
  * @tree: root node of the BT
  * Return: 1 if is complete otherwise 0
  */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t side_l = 0, side_r = 0, equal = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	side_l = binary_tree_is_complete(tree->left);
	side_r = binary_tree_is_complete(tree->right);

	if (tree->left && !tree->right && (side_l == 1 && side_r == 0))
		return (2);

	if ((side_l == 0 && side_r > 0) || (side_l > 0 && side_r == 0))
		equal = 0;

	else if ((side_l == 2 && side_r == 2) || (side_l == 2 && side_r == 2))
		equal = 0;
	else
		equal = 1;

	return (equal);
}
