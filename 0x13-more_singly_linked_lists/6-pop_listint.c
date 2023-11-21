#include "main.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to head node
 *
 * Return: returns o
 */
int pop_listint(listint_t **head)
{
	int returned_value;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		returned_value = temp->n;
		*head = temp->next;
		free(temp);
		return (returned_value);
	}
}