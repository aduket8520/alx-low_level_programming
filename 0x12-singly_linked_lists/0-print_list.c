#include "lists.h"

/**
 * print_list - function that returns the pointer to the single list
 * @count: the node count
 * @len: the length of the array
 * @str: the string passed in the array
 * Return: 0 for success
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* while what next points to is not null*/
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		/* make what next points to the head*/
		h = h->next;
	}
	count++;
	/* print the tails data */
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	return (count);
}
