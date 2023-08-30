#include "lists.h"

/**
 * print_listint_safe - prints a linked list, even if it has a loop
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			break;
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	if (hare == NULL || hare->next == NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	tortoise = tortoise->next;
	while (tortoise != hare)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
	}
	printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
	count++;
	return (count);
}
