#include "lists.h"
/**
 * add_dnodeint - adds a  new node to a doubly linked list
 * @head: pointer to  head of linked list
 * @n: value of  new node
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	new->prev = NULL;

	return (new);
}
