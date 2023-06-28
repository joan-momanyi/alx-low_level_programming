#include "main.h"
#include <stdio.h>
/**
*main - prints the numbers from 0-100, followed by a new line
*but for every multiple of 3 print Fizz instead of a number
*and for the multiple of 5 print Buzz
*Return:0 always success
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		} else if (i %  5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}else if (i == 1)
		{
			printf("%d", i);
			printf(" ");
		}else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
