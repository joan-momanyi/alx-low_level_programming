#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_listint- frees a listint list
*@head:pointer to listint to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while(head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
