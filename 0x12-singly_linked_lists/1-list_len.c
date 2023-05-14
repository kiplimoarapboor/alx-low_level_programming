#include <stddef.h>
#include "lists.h"

/**
 * list_len- finds the number of elements in a list
 *
 * @h: the list
 *
 * Return: the number of elements in list h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
