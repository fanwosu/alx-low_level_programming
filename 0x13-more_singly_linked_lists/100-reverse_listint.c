#include "lists.h"
/**
 * reverse_listint - rerveses a list
 * @head: pointer to head list
 *
 * Return: rreturns head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	prev = NULL;
	current = *head;
	next = current->next;
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
