#include "main.h"
/**
*_putchar - prints output to stdout
*@c: character to be printed
*Return - 1 on success, -1 on error, and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
