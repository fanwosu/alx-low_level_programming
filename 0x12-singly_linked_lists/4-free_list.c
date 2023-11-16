#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nxt_node;
	
	while (current != NULL)
	{
		nxt_node = current->next;
		free(current->str);
		free(current);
		current = nxt_node;
	}
}
