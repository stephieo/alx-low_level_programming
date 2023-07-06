#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at given position
 * @idx: index of lst where node should be added
 * @head: pointer to first node
 * @n: data in new node
 *
 * Return: pointer to  new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *create = *head;
	unsigned int i;

	create = malloc(sizeof(listint_t));
	if (create == NULL)
		return (NULL);

	create->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	create->next = temp->next;
	temp->next = create;

	return (create);

}
