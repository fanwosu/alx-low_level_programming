#include "lists.h"
/**
 * sum_listint - sums the numbers of a list
 * @head: head pointer to list
 *
 * Return: returns a sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
