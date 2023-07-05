#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	list_t *temp;

	if (h == NULL)
		return (NULL);

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);

}
