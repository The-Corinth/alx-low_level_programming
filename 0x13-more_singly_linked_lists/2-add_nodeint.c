#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	 /* Set the data and next pointer for the new node */
	new->n = n;
	new->next = *head;
	/* Update the head pointer to point to the new node */
	*head = new;

	return (new);
}
