#include "lists.h"

/**
 * pop_listint - delete the top node of a linked list
 * @head: pointer to the begining element in the linked list
 *
 * Return: the data inside the elements that was removed,
 * or 0 if the list had nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
