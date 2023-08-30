#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: ptr to the head of the linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, loopCount = 1, totalCount;
	listint_t *slow = *h;
	listint_t *fast = *h;
	listint_t *loopNode, *temp;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (slow == fast)
		{
			loopNode = slow;
			while (loopNode->next != slow)
			{
				loopNode = loopNode->next;
				loopCount++;
			}
			totalCount = count + loopCount;
			loopNode = *h;
			while (loopCount > 0)
			{
				temp = loopNode;
				loopNode = loopNode->next;
				free(temp);
				loopCount--;
			}
			*h = NULL;
			return (totalCount);
		}
	}
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}
