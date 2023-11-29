#include "binary_trees.h"

/**
  * binary_tree_uncle - find the uncle
  * @node: node to find uncle of
  * Return: returns a pointer to the uncle
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
