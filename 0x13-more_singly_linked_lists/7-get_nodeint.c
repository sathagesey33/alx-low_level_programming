#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: index of the node to return
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

