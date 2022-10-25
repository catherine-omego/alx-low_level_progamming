#include "lists.h"

/**
 * listint_len - returns the number of nodes in a list
 *
 * @h: head of the list
 *
 * Return: number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
		size_t num_elmt = 0;

		const listint_t *temp = h;

		while (temp != NULL)
		{
			num_emlt++;
			temp = temp->next;
		}
		return (num_elmt);
}
