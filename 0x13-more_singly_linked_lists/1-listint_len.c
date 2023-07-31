#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*listint_len -prints number of elements in a list
*@h: list to print
*
*Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	 while (h)
	 {
		 num++;
		 h = h->next;
	 }
	 return (num);
}
