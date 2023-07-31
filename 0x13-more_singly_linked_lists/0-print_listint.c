#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_listsint - prints all elements of listint
*@h: linked list of type listint tyo print
*
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

		while (h)
		{
			printf("%d\n", h->n);
			num++;
			h = h->next;
		}
	return (num);
}
