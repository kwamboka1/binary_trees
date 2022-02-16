#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: a pointer to the node to insert the left child in
 *@value: value to store in the new node
 *
 *Return: a pointer to the created node or null if it failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);
	left_child->n = value;
	left_child->right = NULL;
	left_child->parent = parent;
	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
	}
	parent->left = left_child;
	return (left_child);
}