#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	dlistint_t *head;
        dlistint_t *new, *node;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
	        dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
        new->n = 9;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;

	n = print_dlistint(head);
	printf("-> %lu elements\n", n);

/*task 2*/
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 5);
	add_dnodeint(&head, 1);
	
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);

/*task 3*/
	add_dnodeint_end(&head, 9);
	add_dnodeint_end(&head, 10);
	add_dnodeint_end(&head, 11);
	add_dnodeint_end(&head, 12);
	
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	
	node = get_dnodeint_at_index(head, 5);
	    printf("%d\n", node->n);
	
	n = dlistint_len(head);
	    printf("-> %lu elements\n", n);
	free_dlistint(head);
	return (EXIT_SUCCESS);
}
