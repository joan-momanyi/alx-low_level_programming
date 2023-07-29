#include "lists.h"
#include <stdio.h>
/**
*print_list - prints the elements of a list
*@h:pointer to the list to print
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t s = 0;

	if (h == NULL)
		printf("[0] (nil)");
	else
		while(h != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
	         h = h->next;
		 s++;
		}
	return (s);
}
