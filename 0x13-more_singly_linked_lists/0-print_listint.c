#include "lists.h"

/**
 * print_listint- prints all elements of list
 *
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
