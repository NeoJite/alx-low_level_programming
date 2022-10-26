#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the head of the list
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;
	while (*head)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = 0;
}
