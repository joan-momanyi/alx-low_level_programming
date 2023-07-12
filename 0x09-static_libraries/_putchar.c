#include "main.h"
#include <unistd.h>
/**
*_putchar - prints char c to stdout
*@c: input
*Return: 1 on success, - 1 on error, errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
