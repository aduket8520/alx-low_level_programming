#include "lists.h"

/**
 * free_listint2 - this function free the list
 * @head: pointer to the list
 * Head is set to NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
