#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position of the list.
 * @head: pointer to the list.
 * @idx: position to which the node will be added.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *dup = *head;
	unsigned int new;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = dup;
		*head = tmp;
		return (dup);
	}

	for (new = 0; new < (idx - 1); new++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
	}

	tmp->next = dup->next;
	dup->next = tmp;

	return (tmp);
}
