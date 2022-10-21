#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer to the head of the list
 * @str: string to be added
 * Return: the address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str);
{
	char *dup;
	int len;
	list_t *new;
	head = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
