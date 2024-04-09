#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count numbers of node
 *
 * Return: if tree in NULL return 0 else count numbers of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	child = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1;

	return (child);
}
