#include "main.h"
#include <stdio.h>
/**
* _putchar - writes char c to stdout
@c: the character to input
*Return: 1 on success, -1 on error and errno is set appropriately
*/
int _putchar(char c)
{
	return (Write(1, &c, 1));
}
