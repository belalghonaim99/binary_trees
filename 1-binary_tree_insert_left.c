#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent of pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *first_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	first_node = binary_tree_node(parent, value);
	if (first_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		first_node->left = parent->left;
		parent->left->parent = first_node;
	}
	parent->left = first_node;
	return (first_node);
}
