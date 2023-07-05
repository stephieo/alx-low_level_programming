#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *remove = head;
	listint_t *hold = head;

	while (hold != NULL)
	{
		hold = hold->next;
		free(remove);
		remove = hold;
	}


}
