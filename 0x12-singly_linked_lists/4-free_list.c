#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: ptr to the head of the linked list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
