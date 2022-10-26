#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node
 * @head: head node
 * @index: index node
 *
 * Return: address of index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (!head)
		return (0);

	while (head)
	{
		if (index == x)
			return (head);
		x++;

		head = head->next;
	}
		return (0);
}
