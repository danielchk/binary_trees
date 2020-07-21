#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_insert_left - Create a left node
  * @parent: parent
  * @value: value
  * Return: new_node adress
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode = NULL;


	if (parent == NULL)
		return (NULL);

	leftnode = binary_tree_node(parent, value);
	if (leftnode == NULL)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = leftnode;
		leftnode->left = parent->left;
	}
	parent->left = leftnode;
	return (leftnode);
}
