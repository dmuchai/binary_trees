#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_root - Checks if a given node is the root of the tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}