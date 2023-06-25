#include "main.h"
#include<stdio.h>
/**
*functions_nested_loops - compute the sum of the multiples of 3 and 5 below 1024
*Return: always 0
*/
int main(void)
{
	int c, sum 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
			sum += c;
	}
	printf("%d\n", sum);
	return (0);
