#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: ptr to ptr head of the linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *old = NULL;
	listint_t *new = *head;
	listint_t *temp;

	while (new != NULL)
	{
		temp = new->next;
		new->next = old;

		old = new;
		new = temp;

	}

	*head = old;

	return (*head);
}

