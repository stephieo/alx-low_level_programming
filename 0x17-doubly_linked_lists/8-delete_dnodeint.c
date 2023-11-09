#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to head of list
 * @index of node to delete
 * 
 * Return: 1 ( success) -1 (fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i < idx && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current->prev == NULL)
	{
		(current->next)->prev = NULL;
		*head = current->next;
	}
	else if (current->next == NULL)
	{
		(current->prev)->next = NULL;
	}
	else
	{
		(current->prev)->next = (current->next);
		(current->next)->prev = (current->prev);
	}
	free(current);


	return (1);
}
