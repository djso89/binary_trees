#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a node in a
 * binary
 * @tree: pointer to the root node of the tree to measure the depth
 * Return:  depth of a node in a binary tree, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	else
		return (binary_tree_depth(tree->parent) + 1);
}
