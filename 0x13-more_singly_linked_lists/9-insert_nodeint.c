#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to the first node
 * @idx: position to insert node
 * @n: constant value of node to be inserted
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current;
	unsigned int counter;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	} 
	current = *head;
	counter = 0;

	while (current != NULL && counter < idx - 1)
	{
		current = current->next;
		counter++;
	}
	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = current->next;
	current->next = newNode;
	return (newNode);
}
