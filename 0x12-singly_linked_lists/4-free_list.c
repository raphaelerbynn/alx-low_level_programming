#include "lists.h"
#include <stdlib.h>


/**
 * free_list - frees memory 
 * @head: head of the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		head = head->next;

		free(i->str);

		free(i);
	}
}
