#include "lists.h"

/**
 * pop_listint - deletes the head
 *
 * @head: pointer to the first element
 *
 * Return: the head node's data(int n)
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int first;

	if (*head == NULL)
		return (0);

	temp = *head;
	first = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (first);
}
