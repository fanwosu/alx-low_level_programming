#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: head pointr
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head)
	{
		next = *head->next;
		free(*head);
		*head = next;
	}
	head = NULL;
}

