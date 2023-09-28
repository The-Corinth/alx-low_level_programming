#include "lists.h"

/**
 * listint_len - returns the number of elements (nodes) in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0; /* Variable named num */

	while (h)
	{
		num++; /* increments the num variable by 1 */
		h = h->next;
	}

	return (num);
}
