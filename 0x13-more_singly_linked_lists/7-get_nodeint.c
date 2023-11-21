#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at a given index
 * @head: head pointer to first node
 * @index: node to get
 *
 * Return: return an address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x == index)
		{
			return (head);
		}
		head = head->next;
		x++;
	}
	return (NULL);
}
