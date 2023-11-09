#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder = NULL, *remove = head;

	while (remove != NULL)
	{
		holder = remove->next;
		free(remove);
		remove = holder;
	}
}
