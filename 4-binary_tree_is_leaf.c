#include "binary_trees.h"


/**
 * binary_tree_is_leaf - function checks if node is a leaf or no.
 * @node: node
 * Return: 1 is a leaf or 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
