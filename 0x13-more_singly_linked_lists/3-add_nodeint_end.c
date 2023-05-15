#include "lists.h"

/**
 * add_nodeint_end- adds node at end of list
 *
 * @head: the list
 * @n: element to be added
 *
 * Return: address to new element, (NULL) otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
