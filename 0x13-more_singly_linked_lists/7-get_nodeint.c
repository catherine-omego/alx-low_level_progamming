#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 *
 * @head: first element pointer
 *
 * @index: the index of the element
 *
 * Return: the nth node or NULL if the node does not exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int i = 0;
		listint_t *temp;

		while (head != NULL)
		{
			if (i == index)
			{
				temp = head;
				return (temp);
			}
			head = head->next;
			i++;
		}
		return (NULL);
}
