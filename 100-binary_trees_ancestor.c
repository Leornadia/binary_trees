#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if no common
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	binary_tree_t *current = (binary_tree_t *)first;

	while (current != NULL)
	{
		if (current->n > first->n && current->n > second->n)
			current = current->left;
		else if (current->n < first->n && current->n < second->n)
			current = current->right;
		else
			break;
	}

	return (current);
}

