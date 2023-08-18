#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t list
 * @head: ointer to first node
 * @index: index to get
 *
 * Return: node at index, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (temp != NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i++;
	}

	return (temp);
}
