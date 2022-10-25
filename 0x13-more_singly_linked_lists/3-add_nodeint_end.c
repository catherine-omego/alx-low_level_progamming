#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 *
 * @head: pointer to the reference head
 *
 * @n: data to be added
 *
 * Return: the pointer to the newly added node if successful, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	listint_t *tmp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;

		return (new_node);
}
