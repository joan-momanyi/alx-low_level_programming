#include "main.h"
/**
* print_last_digit - prints the last digit of a number
*@l : last digit of a number
*Return: value of last digit
*/
int print_last_digit(int x)
{
	int l;

	l = x % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
