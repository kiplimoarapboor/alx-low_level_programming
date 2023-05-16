#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a position
 *
 * @head: pointer to list
 * @idx: position to insert new node
 * @n: the node to insert
 *
 * Return: pointer to inserted node, (NULL) otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int length;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = (*head);

	if (!new)
		return (NULL);

	length = listint_len((*head));

	if (idx > length)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
	}
	else
	{
		while (--idx)
			temp = temp->next;

		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}

/**
 * listint_len - return number of elements in a linked list.
 * @h: pointer to a singly linked list.
 * Return: an int.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
