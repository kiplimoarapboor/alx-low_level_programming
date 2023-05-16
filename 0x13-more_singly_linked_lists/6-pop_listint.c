#include "lists.h"

/**
 * pop_listint- deletes head node
 *
 * @head: head node of the list
 *
 * Return: the deleted node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
