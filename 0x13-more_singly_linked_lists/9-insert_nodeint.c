#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked
 * list at a given position.
 * @head: Pointer to the pointer to the first node in the list.
 * @idx: Index where the new node is added.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Declare variables for index, new node, and traversal */
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	/* Allocate memory for the new node and check for allocation failure */
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	/* Set data and next pointer for the new node */
	new->n = n;
	new->next = NULL;

	/* If insertion is at the beginning (idx == 0), update head */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* Traverse the list to find the position to insert the new node */
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			/* Insert the new node and update pointers */
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	/* Return NULL if the specified index is out of bounds */
	return (NULL);
}
