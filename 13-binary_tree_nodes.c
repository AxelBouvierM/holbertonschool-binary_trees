#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int _left = 0, _right = 0;

	if (tree == NULL)
		return (0);

	_left = binary_tree_nodes(tree->left);
	_right = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (_left + _right + 1);
	else
		return (_left + _right);
}
