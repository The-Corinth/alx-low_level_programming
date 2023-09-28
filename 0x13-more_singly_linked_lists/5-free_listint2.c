#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	/* Declare a temporary pointer for traversal */
	listint_t *temp;

	/* Check if the list pointer is NULL */
	if (head == NULL)
	{
		return; /* Nothing to free, exit the function */
	}

	while (*head)
	{
		/* Store the next node's address in the temporary pointer */
		temp = (*head)->next;

		/* Free the current node */
		free(*head);

		/* Move the head pointer to the next node */
		*head = temp;
	}

	/* Set the head pointer to NULL to indicate an empty list */
	*head = NULL;
}
