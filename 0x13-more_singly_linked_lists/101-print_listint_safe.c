#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: ptr to the head of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t numb = 0;
	const listint_t *s = head;
	const listint_t *f = head;

	while (s != NULL && f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		f = f->next->next;
		numb++;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			exit(98);
		}
	}

	while (s != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		numb++;
	}

	return (numb);
}
