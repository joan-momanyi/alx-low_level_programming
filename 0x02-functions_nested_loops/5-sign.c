#include "main.h"
/**
*main - determines whether the input number is zero, greater than zero or less than zero
*
*Return: return 1 if its greater than 0, return 0 is its zero, return -1 if its less than 0
*/
int print_sign(int n)
{
	if ( n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ( n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
