#include "lists.h"
/**
 * dlistint_len - counts the elements of a dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *counter = h;

	if (h == NULL)
		return (0);

	for (i = 1; counter->next != NULL; i++)
	{
		counter = counter->next;
	}

	return (i);

}
