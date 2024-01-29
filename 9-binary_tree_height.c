#include "binary_trees.h"

/**
 * binary_tree_height - function functions to find the height of a binary tree
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = 0;
	int n = 0;

	if (!tree)
		return (0);
	if (tree->left)
		i = 1 + binary_tree_height(tree->left);
	if (tree->right)
		n = 1 + binary_tree_height(tree->right);
	return ((i < n) ? n : i);
}
