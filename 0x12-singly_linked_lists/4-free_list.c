#include "lists.h"
/**
 * free_list - frees all nodes in a list
 *
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *remove  = head;
	list_t *hold = NULL;

	while (remove != NULL)
	{
		hold = remove->next;
		free(remove->str);
		free(remove);
		remove = hold;
	}


}
