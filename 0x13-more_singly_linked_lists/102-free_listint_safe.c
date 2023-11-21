#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - free a linked list
 * @h: header to link list
 *
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		count++;
		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
