#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare pointers for the new node and traversal */
	listint_t *new;
	listint_t *temp = *head;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/* Set the data and next pointer for the new node */
	new->n = n;
	new->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse the list to find the last node */
	while (temp->next)
		temp = temp->next;

	/* Set the next pointer of the last node to the new node */
	temp->next = new;

	return (new);
}
