#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: first node
 * @str: node to be added
 *
 * Return: pointer to new node, (NULL) otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *temp;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = n;
	return (n);
}
