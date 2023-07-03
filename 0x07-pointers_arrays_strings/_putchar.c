#include "main.h"
/**
*_putchar - prints character to stdout
*@c: character to print
*Return: 1 on success, -1 on error and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
