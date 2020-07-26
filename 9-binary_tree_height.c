#include "binary_trees.h"
#include <stdlib.h>
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
