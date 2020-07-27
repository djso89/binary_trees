#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: poiinter to the root node of the tree
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height_l = binary_tree_height(tree->left) + 1;
	height_r = binary_tree_height(tree->right) + 1;

	if (height_l >= height_r)
		return (height_l);
	else
		return (height_r);
}

/**
 * binary_tree_is_perfect - a function that chercks if a
 * binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l != r)
	{
		return (0)
	}
	if (binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
