#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *remove = *head;
	listint_t *hold = *head;
	
	if (*head == NULL)
		return;

	while (hold != NULL)
	{
		hold = hold->next;
		free(remove);
		remove = hold;
	}
	*head = NULL;

}
