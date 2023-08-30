#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: ptr to ptr head of the list
 * @index: the index of the node to be del
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *c;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	c = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (c == NULL)
		{
			return (-1);
		}

		c = c->next;
	}

	if (c == NULL || c->next == NULL)
	{
		return (-1);
	}

	node = c->next;
	c->next = node->next;
	free(node);

	return (1);
}
