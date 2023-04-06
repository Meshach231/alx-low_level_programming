#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a lintint_t
 * linked lists.
 * @head: a pointer to the head of the listint_t list.
 *
 * Return: if there is no loop - NULL
 * otherwise - the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mesh, *hare;

	mesh = hare = head;
	while (mesh && hare && hare->next)
	{
		mesh = mesh->next;
		hare = hare->next->next;
		if (mesh == hare)
		{
			mesh = head;
			break;
		}
	}
	if (!mesh || !hare || !hare->next)
		return (NULL);
	while (mesh != hare)
	{
		mesh = mesh->next;
		hare = hare->next;
	}
	return (hare);
}

