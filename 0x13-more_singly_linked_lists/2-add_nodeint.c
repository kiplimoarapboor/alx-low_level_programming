#include "lists.h"

/**
 * add_nodeint- adds a new node at beginning of list
 *
 * @head: the list
 * @n: node to be added
 *
 * Return: address to added node, (NULL) otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (*head);
}
