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
	unsigned int i = 0, length;
	dlistint_t *new = NULL;

	if (*h == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}


	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp;
	new->prev = temp->prev;
	(temp->prev)->next = new;
	temp->prev = new;


	return (new);
}
