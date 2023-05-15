#include "lists.h"

/**
 * listint_len-finds the length of linked list
 *
 * @h: the list
 *
 * Return: the length of the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
