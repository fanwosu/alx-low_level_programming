#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the elements of a list
 * @h: head of node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
