#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize variables for traversal and index counting */
	unsigned int i = 0;
	listint_t *temp = head;

	/* Traverse the list until the desired index is reached or end of list */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* Return the node at the specified index if found, otherwise return NULL */
	return (temp ? temp : NULL);
}
