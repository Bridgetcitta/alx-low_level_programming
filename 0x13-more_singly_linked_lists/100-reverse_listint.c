#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: ptr to ptr head of the linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
