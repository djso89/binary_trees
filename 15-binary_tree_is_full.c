#include "binary_trees.h"
/**
 * binary_tree_is_full - a function that checks if a
 * binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		return (l && r);
	}
	return (0);
}
