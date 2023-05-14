#include "lists.h"

/**
 * add_node- adds a node at beginning of a list
 *
 * @head: the list
 * @str: the node to be added
 *
 * Return: pointer to added node, (NULL) otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	n->next = (*head);
	(*head) = n;

	return (*head);
}
