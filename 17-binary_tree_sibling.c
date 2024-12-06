#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling or invalid input
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);

    if (node->parent->right == node)
        return (node->parent->left);

    return (NULL); /* Should never reach here, included for completeness */
}
