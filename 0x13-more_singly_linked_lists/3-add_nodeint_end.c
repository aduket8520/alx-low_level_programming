#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @tmp: a temporary node to help in traversing nodes
 * @end: the node to be added at the end of the list
 * @n: the integer to be added to the list
 * @head: this it pointer to list of elements
 * Return: address of the new element and NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *tmp;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (0);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
		*head = end;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = end;
	}
	return (*head);
}
