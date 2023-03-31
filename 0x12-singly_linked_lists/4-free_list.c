#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list by deallocating memory for each node
 * and its string member
 * @head: pointer to the header node of list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
