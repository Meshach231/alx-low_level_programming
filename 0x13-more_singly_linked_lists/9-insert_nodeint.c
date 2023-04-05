#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the first head node in the list
 * @idx: index of listint_t where new node4 will insert
 * @n: value for new node
 *
 * Return: pointer to address the new node ELSE NULL if error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *present, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		present = *head;
		for (node = 0; node < idx - 1 && current != NULL; node++)
		{
			present = present->next;
		}
		if (present == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = present->next;
	present->next = new;
	return (new);
}

