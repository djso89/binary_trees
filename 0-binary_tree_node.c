#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;

	return (node);
}
