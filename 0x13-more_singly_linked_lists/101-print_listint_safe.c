#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: ptr to the head of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{

	const listint_t *current = head, *temp;
	size_t count = 0;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (count);
}
