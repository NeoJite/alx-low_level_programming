#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 *
 * Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *bread;
	int result;

	if (!head || !*head)
		return (0);

	result = (*head)->n;
	bread = (*head)->next;
	(*head)->next = 0;

	free(*head);

	*head = bread;

	return (result);
}


