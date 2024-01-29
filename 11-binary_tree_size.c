#include "binary_trees.h"

/**
 * binary_tree_size - size of the tree.
 * @tree: data.
 *
 * Return: size of the node.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
		size_t size = 0;

		if (!tree)
			return (0);

		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
		return (size + 1);
}
