#include "lists.h"

/**
 * list_len - function that returns the list of strings passed
 * @h: the head of the node
 * Return: 0 for success
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* while what next points to is not null*/
	while (h->next != NULL)
	{
		count++;
		/* make what next points to the head*/
		h = h->next;
	}
	count++;
	/* print the tails data */
	return (count);
}
