#include "lists.h"
/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @h: pointer to head of list
 * 
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *counter = h;
	
	if (h == NULL)
		return(0);

	for (i = 1; counter->next != NULL; i++)
	{
		printf("%d\n", counter->n);
		counter = counter->next;
	}	
	printf("%d\n", counter->n);

	return(i);
	
}
