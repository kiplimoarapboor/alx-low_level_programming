#include "lists.h"

/**
 * get_nodeint_at_index- gets the nth node in list
 *
 * @head: the list
 * @index: index of the node
 *
 * Return: pointer to the nth node, (NULL) otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}

	return (NULL);
}
