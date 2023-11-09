#include "lists.h"
/**
 * sum_dlistint - sums the values in elements of a dlistint_t list
 * @head: pointer to head of list
 *
 * Return: number of nodes
 */
int sum_dlistint(const dlistint_t *head)
{
	int i = 0;
	const dlistint_t *counter = head;

	if (head == NULL)
		return (0);

	while (counter->next != NULL)
	{
		i += counter->n;
		counter = counter->next;
	}
	i += counter->n;

	return (i);

}
