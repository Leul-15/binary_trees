#include "binary_trees.h"

/**
  * binary_tree_height - get height from binary tree
  * @tree: tree to search
  * Return: height
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lsize = 0, rsize = 0;

		lsize = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rsize = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lsize > rsize) ? lsize : rsize);
	}
	return (0);
}
