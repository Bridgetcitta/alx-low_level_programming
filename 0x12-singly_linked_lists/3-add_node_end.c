#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: ptr tp ptr head of list_t
 * @str: input string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *c;
	list_t *n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}

	n->len = strlen(str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
	}

	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = n;
	}

	return (n);
}
