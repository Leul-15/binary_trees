#include "binary_trees.h"

/**
  * is_full - checks if tree is full
  * @tree: tree to check
  * Return: 1 if true 0 if falls
  */
int is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
  * binary_tree_is_full - check if binary tree is full
  * @tree: binary tree
  * Return: 1 if full 0 if not
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
