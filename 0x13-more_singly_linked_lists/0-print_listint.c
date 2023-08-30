#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: contant int
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
