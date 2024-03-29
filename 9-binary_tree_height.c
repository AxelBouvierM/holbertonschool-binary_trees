#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int _left = 0, _right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	_left = binary_tree_height(tree->left);
	_right = binary_tree_height(tree->right);
	if (_left > _right)
		return (_left + 1);
	else
		return (_right + 1);
}
