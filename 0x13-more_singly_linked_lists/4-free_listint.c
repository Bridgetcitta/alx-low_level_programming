#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: ptr to the head of the linked list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
