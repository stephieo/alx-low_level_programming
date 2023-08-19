#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at given position
 * @h: pointer to start of node
 * @idx: positon for insertion
 * @n: content of node
 *
 * Return: address of new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i = 0;
	dlistint_t *new = NULL;

	if (*h == NULL)
		return (NULL);

	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (idx == 0)
		new = add_dnodeint(h, n);
	if (idx == (i + 1))
	{
		new = add_dnodeint_end(h, n);
	}
	return (new);
}
