#include "lists.h"
#include <string.h>

/**
 * add_node - the pointer to the function that returns pointer to the character
 * head: pointer to pointer to the list
 * str: the list of strings passed
 * @Return:
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	n->str = strdup(str);
	n->len = strlen(str);
	if (*head == NULL)
		n->next = NULL;
	else
		n->next = *head;
	*head = n;
	return (*head);
}
