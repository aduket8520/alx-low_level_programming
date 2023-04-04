#include "lists.h"
/**
 * free_listint- this function just frees a node in the list
 * @head: the pointer to the list
 * @tmp: the temporary memory for storing during freeing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);

		head = tmp;
	}
}
