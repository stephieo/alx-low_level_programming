#include "lists.h"
/**
 * add_node_end - adds  a node at the end of linked list
 * @head: pointer to head of linked list
 * @str: string to be placed in new node
 *
 * Return: address of new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	size_t i = 0;
	list_t *count = *head;


	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;
	temp->len = i;
	temp->next = NULL;

	while (count->next != NULL)
		count = count->next;

	count->next = temp;


	return (temp);
}
