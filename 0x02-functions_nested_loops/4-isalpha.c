#include "main.h"
/**
*main - shows 1 if it is a letter and shows 0 otherwise
*
*Return: 1 for a letter, 0 -otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)||(c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

