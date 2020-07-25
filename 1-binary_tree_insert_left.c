#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: Pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;

	if (parent->left)
		parent->left->parent = node;

	node->left = parent->left;
	node->right = NULL;
	parent->left = node;

	return (node);
}
