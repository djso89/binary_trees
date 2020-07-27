#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size
 * of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: size of binary tree or 0 if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r, size;

	if (!tree)
		return (0);

	size_l = 1 + binary_tree_size(tree->left);
	size_r = 1 + binary_tree_size(tree->right);

	size = size_l + size_r - 1;
	return (size);
}
