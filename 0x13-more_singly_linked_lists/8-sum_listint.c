#include "lists.h"

/**
 * sum_listint- sums all data in list
 *
 * @head: the list
 *
 * Return: the sum of all data, (0) otherwise
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
