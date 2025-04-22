#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_node - new binary tree node
 * @parent: parent node
 * @value: value to be put into new node
 *
 * Return: return new_node
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	new_node->n = value;

	return(new_node);
}
