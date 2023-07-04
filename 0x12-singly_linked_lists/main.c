#include "lists.h"
#include <string.h>
/**
 * main - tester code
 *
 * Return: 0
 */
int main(void)
{

	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;
	
	head = &hello;
	new = malloc(sizeof(list_t));
        if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = list_len(head);
	printf("-> %lu elements\n", n);

	printf("\n");
        free(new->str);
	new->str = NULL;
	n = list_len(head);
	printf("-> %lu elements\n", n);

	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	print_list(head);	
	free(new);
	return (0);
}
