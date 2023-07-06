#include "lists.h"
/**
 * sum_listint - sums all the data in a listint_t list
 * @head: pointer to first node
 *
 * Return: sum of all data, or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *trav = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);

}
