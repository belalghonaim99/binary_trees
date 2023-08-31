#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent of pointer to the node to insert the right-child in
 * @value:  the value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		first_node->right = parent->right;
		parent->right->parent = first_node;
	}
	parent->right = first_node;
	return (first_node);
}
