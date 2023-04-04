#include "lists.h"

/**
 * listint_len - function that returns the pointer to the list
 * @node: the node count
 * @h: the pointer to the list
 * Return: 0 for success
*/
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h == NULL)
		return (0);

	if (h->next != NULL)
	{
		node++;
		h = h->next;
	}
	node++;
	if (h->next == NULL)
		printf(" ");
	return (node);
}
