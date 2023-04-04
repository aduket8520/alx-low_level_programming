#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the first function of the list
 * @n: the constant integer in the new node
 * Return: address of the new element or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mee;

	mee = malloc(sizeof(listint_t));
	if (mee == NULL)
		return (0);

	mee->n = n;
	mee->next = *head;
	*head = mee;
	return (mee);
}
