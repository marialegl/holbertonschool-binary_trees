#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is full.
 * @tree: data
 *
 * Return: 1 on success, 0 if fails.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
