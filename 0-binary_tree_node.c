#include "binary_trees.h"

/**
 *  binary_tree_node - that creates a binary tree node for first node
 * @parent: node parent in a pointer
 * @value: value of the node to put in new node
 * Return: the new node or null on  failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *first_node;

	first_node = malloc(sizeof(binary_tree_t));
	if (first_node == NULL)
	{
		return (NULL);
	}
	first_node->n = value;
	first_node->parent = parent;
	first_node->left = NULL;
	first_node->right = NULL;
	return (first_node);
}
