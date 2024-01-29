#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: node to check if it is a sibling
 *
 * Return:  the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	sibling = node;
	node = node->parent;

	if (node->right && node->left)
	{
		if (node->right == sibling)
			return (node->left);
		return (node->right);
	}

	return (NULL);
}
