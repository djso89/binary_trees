#include "binary_trees.h"
/**
 * ExistNode - a function that checks if node exists
 * @root: root
 * @node: pointer to the node to search for
 * Return: 1 if contains node, 0 otherwise
 */
int ExistNode(const binary_tree_t *root, const binary_tree_t *node)
{
	if (!root)
		return (0);
	if (root == node)
		return (1);
	return (ExistNode(root->left, node) | ExistNode(root->right, node));
}

/**
 * binary_tree_ancestor- finds the lowest common ancestor of two nodes
 * @frist: a pointer to the first node
 * @second: a pointer to the second node
 * Return: pointer to the lowest common ancestor
 */
binary_tree_t *binary_tree_ancestor(const binary_tree_t *first,
				    const binary_tree_t *second)
{
	binary_tree_t *node = (binary_tree_t *)first;

	while (node)
	{
		if (ExistNode(node, second))
			return (node);
		node = node->parent;
	}
	return (NULL);
}
