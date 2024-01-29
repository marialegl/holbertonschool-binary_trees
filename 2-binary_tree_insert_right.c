#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a node to the right
 * @parent: the parent of the nodes
 * @value: value of the nodes
 *
 * Return: the newnode at the left
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		new_node->n = value;
		parent->right->parent = new_node;
		new_node->right = parent->right;
		new_node->parent = parent;
		parent->right = new_node;
		new_node->left = NULL;
	}
	else
	{
		new_node->parent = parent;
		new_node->n = value;
		parent->right = new_node;
		new_node->right = NULL;
		new_node->left = NULL;
	}

	return (new_node);
}
