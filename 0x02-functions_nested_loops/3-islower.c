#include "main.h"
/**
* main - return 1 if lowercase , 0 if it is uppercase
*
*Return: 1 if lowercase, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
