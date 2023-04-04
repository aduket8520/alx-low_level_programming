#include "lists.h"
/**
 * sum_listint - this does the addition purpose
 * @head: pointer to the list of elements in addition
 * Return: sum of all data in the list and 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	while (new)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
