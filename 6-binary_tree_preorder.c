#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Pre-order traversal visits the root node first, then the
 * left subtree, followed by the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
}
