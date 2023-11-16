#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that prints a list
 * @h: the list to be printed
 *
 * Return: size of node.
 */
size_t list_len(const list_t *h)
{
	size_t number_of_node = 0;

	while (h != NULL)
	{
		number_of_node++;
		h = h->next;
	}
	return (number_of_node);
}
