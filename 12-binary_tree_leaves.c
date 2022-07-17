#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int _left = 0, _right = 0;

	if (tree == NULL)
		return (0);

	_left = binary_tree_leaves(tree->left);
	_right = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (_left + _right + 1);
	else
		return (_left + _right);
}
