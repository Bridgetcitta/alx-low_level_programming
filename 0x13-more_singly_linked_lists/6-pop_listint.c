#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head of the linked list
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
