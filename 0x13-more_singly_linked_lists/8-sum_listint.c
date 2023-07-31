#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*sum_listint - adds all the data of listint
*@head: pointer to head of linked list
*
*Return:sum of all the data, 0 if list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while(temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
