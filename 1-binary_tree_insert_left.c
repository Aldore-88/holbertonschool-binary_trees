#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node on left of parent
 * @parent: parent node
 * @value: value to be placed in left node of parent
 *
 * Return: return new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;

	parent->left = new_node;

	return (new_node);
}
