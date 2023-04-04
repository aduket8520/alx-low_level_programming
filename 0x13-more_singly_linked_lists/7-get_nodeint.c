#include "lists.h"

/**
 * get_nodeint_at_index - function deletes a nth node from the lis
 * @head: pointer to the head in the list
 * @index: this is for locating the node
 * Return: if exists locate and NULL if it doesnt
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int num = 0;

	while (new && num != index)
	{
		num++;
		new = new->next;
	}
	if (new && num == index)
		return (new);

	return (NULL);
}
