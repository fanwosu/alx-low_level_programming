#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: header to linked list
 *
 * Return: returns number of linkes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
