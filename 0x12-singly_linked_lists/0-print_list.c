#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints a list
 * @h: the list to be printed
 *
 * Return: size of node.
 */
size_t print_list(const list_t *h)
{
	size_t number_of_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		number_of_node++;
		h = h->next;
	}
	return (number_of_node);
}
