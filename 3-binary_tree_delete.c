#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * Where tree is a pointer to the root node of the tree to delete
 * @tree: If tree is NULL, do nothing
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
