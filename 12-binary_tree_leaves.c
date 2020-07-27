#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the
 * leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count
 * the number of leaves
 * Return: number of leaves, 0 if tree is null.
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_l, leaf_r;

	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);

	leaf_l = binary_tree_leaves(tree->left);
	leaf_r = binary_tree_leaves(tree->right);

	return (leaf_l + leaf_r);
}
