#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - function tat deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: if tree is NULL, it does nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
