#include "main.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to head node
 *
 * Return: returns o
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (value);
}
