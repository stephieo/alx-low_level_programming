#include "lists.h"
/**
 * list_len - counts number of elements in linked list
 * @h: head of linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
