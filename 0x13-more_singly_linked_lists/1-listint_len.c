#include "lists.h"
/**
 * listint_len - gets the length of a listint_t list
 * @h: pointer to first node
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
