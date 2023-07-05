#include "lists.h"
/**
 * add_nodeint_end - adds a new node to end of listint_t list
 * @head: pointer to head of list
 * @n: integer to be in new node
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *trav = *head;
	listint_t *create = NULL;

	create = malloc(sizeof(listint_t));
	if (create == NULL)
		return (NULL);
	create->n = n;
	create->next = NULL;

	while (trav->next != NULL)
		trav = trav->next;
	trav->next = create;

	return (create);
}
