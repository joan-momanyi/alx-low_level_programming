#include "main"
/**
*print_sign - prints the sign of a number
*@n : number to be signed
*Return: return 1 if its greater than 0, return 0 is its zero, return -1 if its less than 0
*/
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if(n < 0)
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
