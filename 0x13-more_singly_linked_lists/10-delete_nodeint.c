#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: pointer to the first node
 * @index: the point of deletion
 *
 * Return: 1 if successful and -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int x;

	current = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (x = 0; x < index - 1 && current != NULL; x++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
