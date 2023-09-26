#include "lists.h"

/**
 * add_nodeint - adds a brand new node at the first of a linked list
 * @head: pointer to the begining node in the list
 * @n: data to insert in that brand new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
