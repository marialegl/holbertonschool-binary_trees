#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node to the left
 * @parent: the parent of the nodes
 * @value: value of the nodes
 *
 * Return: the newnode at the left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		new_node->n = value;
		parent->left->parent = new_node;
		new_node->left = parent->left;
		new_node->parent = parent;
		parent->left = new_node;
		new_node->right = NULL;
	}
	else
	{
		new_node->parent = parent;
		new_node->n = value;
		parent->left = new_node;
		new_node->left = NULL;
		new_node->right = NULL;
	}

	return (new_node);
}
