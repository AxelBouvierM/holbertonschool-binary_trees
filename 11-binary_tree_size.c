#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int _right = 0, _left = 0;

	if (tree == NULL)
		return (0);

	_left = binary_tree_size(tree->left);
	_right = binary_tree_size(tree->right);

	return (_left + 1 + _right);
}
