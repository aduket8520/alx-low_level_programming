#include "lists.h"

/**
 * print_listint - function that returns the pointer to an int
 * @nodes: the node count
 * @h: the list of integers to be printed
 * @n: the integer in the node
 * Return: 0 f0r success
 */

size_t print_listint(const listint_t *h)
{
	/* *h is the pointer to the integer*/
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n ", h->n);
		nodes++;
		h = h->next;
	}
	nodes++;
	if (h->next == NULL)
		printf("%d\n ", h->n);
	return (nodes);
}
