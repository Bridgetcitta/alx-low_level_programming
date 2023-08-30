#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: ptr to the head of the linked list
 * Return: 0;
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
