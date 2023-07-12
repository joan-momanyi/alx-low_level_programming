#include "main.h"
#include <stdio.h>
/**
*_putchar - writes the char c to stdout
*@c: input
*Return: 1 on success, -1 on error, set errno appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
