#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked listat
 * a certain index.
 * @head: Pointer to the pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		return (-1);
	}

	/* If deletion is at the beginning (index == 0), update head */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node before the one to delete */
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1); /* Index out of bounds */
		}
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1); /* Deletion successful */
}
