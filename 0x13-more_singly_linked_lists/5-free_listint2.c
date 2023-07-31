#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_listint2 - frees listint
*@head:pointer to listint to be freed
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if(head == NULL)
		return;

	while(*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
