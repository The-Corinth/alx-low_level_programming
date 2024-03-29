#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Linked list to search for a loop.
 *
 * Return: Address of the node where the loop starts,
 * or NULL if there's no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
	{
		return (NULL); /* Return NULL if the list is empty */
	}

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast); /* Return the address of the node where the loop starts */
		}
	}

	return (NULL); /* Return NULL if no loop is found */
}
