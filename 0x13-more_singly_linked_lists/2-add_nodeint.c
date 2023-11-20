#include "lists.h"
/**
 * add_nodeint - add node at the begining
 * @head: head of node
 * @n: number of nodes
 * Return: new node address or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
