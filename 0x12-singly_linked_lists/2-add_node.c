#include "lists.h"
/**
 * add_node - adds a new node to the beginning of linked list list_t
 * @head: pointer to the head of linked list
 * @str: string to be assigned to  created node
 *
 * Return: the address of  new node/ element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	unsigned int i = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	while (str[i] != '\0')
		i++;

	temp->len = i;
	temp->next = *head;

	*head = temp;

	return (*head);
}
