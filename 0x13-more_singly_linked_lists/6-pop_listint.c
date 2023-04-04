#include "lists.h"

/**
 * pop_listint - function deletes the head node
 * @head: pointer to the list
 * @del: pointer
 * @new: list
 * Return: 0 if list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *del;
	int new;

	if (!*head)
		return (0);

	new = (*head)->n;
	del = (*head)->next;
	free(*head);
	*head = del;

	return (new);
}
