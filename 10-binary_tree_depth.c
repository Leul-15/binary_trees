#include "binary_trees.h"

/**
  * binary_tree_depth - check the depth of a tree
  * @tree: checking
  * Return: depth
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
