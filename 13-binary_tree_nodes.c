#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least
 * one child in a binary tree
 * @tree: a pointer to the root of the tree to count the number of nodes
 * Return: number of nodes at least 1 child in a tree, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_left, num_right, tot;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	num_left = binary_tree_nodes(tree->left) + 1;
	num_right = binary_tree_nodes(tree->right) + 1;

	tot = num_left + num_right - 1;
	return (tot);
}
