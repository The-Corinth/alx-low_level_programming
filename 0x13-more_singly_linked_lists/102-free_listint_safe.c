#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to the pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0); /* Nothing to free, return 0 */
	}

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break; /* Stop freeing if a loop is detected */
		}
	}

	*h = NULL;

	return (len);
}
