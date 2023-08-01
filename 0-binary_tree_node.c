#include <stdlib.h>
#include <stdio.h>


/**
 * binary_tree_node - creates binary tree node
 * @parent:  pointer to the parent node
 * @value: value to put in the new node
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));
if (new == NULL)
{
return (NULL);
}
new->value = value;
new->left = null;
new->parent = parent;
return (new);
}
