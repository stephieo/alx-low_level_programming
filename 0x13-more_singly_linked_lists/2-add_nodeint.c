#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of  a listint_t list
 * @head: pointer to head of list
 * @n:integer to be assigned to the node
 *
 * Return: address of new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *create = NULL;

	create = malloc(sizeof(listint_t));
	if (create == NULL)
		return (NULL);
	create->n = n;
	create->next = *head;
	*head = create;

	return (*head);
}
