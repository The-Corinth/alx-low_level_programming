#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A pointer to the linked list of type listint_t to print.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h) /*  iterates through the linked list */
	{
		printf("%d\n", h->n); /* Prints the value of n */
		num++;
		h = h->next;
	}

	return (num);
}
