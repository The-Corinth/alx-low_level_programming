#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the pointer to the first element in the linked list.
 *
 * Return: The data inside the element that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	/* Declare a temporary pointer for the next node and a variable for data */
	listint_t *temp;
	int num;

	/* Check if the list pointer is NULL or if the list is empty */
	if (!head || !*head)
	{
		return (0); /* Return 0 for an empty list or invalid pointer */
	}

	/* Store the data of the current head node */
	num = (*head)->n;

	/* Move the head pointer to the next node */
	temp = (*head)->next;

	/* Free the current head node */
	free(*head);

	/* Update the head pointer to the next node */
	*head = temp;

	return (num); /* Return the data from the deleted node */
}
