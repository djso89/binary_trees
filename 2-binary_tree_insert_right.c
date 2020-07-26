#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_new;

	if (!parent)
		return (NULL);

	insert_new = malloc(sizeof(binary_tree_t));
	if (!insert_new)
		return (NULL);

	insert_new->n = value;
	insert_new->parent = parent;
	insert_new->left = NULL;

	if (!(parent->right))
	{
		insert_new->right = NULL;
		parent->right = insert_new;
	}
	else
	{
		parent->right->parent = insert_new;
		insert_new->right = parent->right;
		parent->right = insert_new;
	}

	return (insert_new);
}
