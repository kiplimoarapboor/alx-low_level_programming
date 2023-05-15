#include "lists.h"

/**
 * free_listint2- frees a list
 *
 * @head: the list
 */

void free_listint2(listint_t **head)
{
	listint_t *n;

	while (*head)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
	}
}
