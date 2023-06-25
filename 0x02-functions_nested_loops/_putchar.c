#include "main.h"
#include<unistd.h>
/**
*_putchar - prints c to stdout
*@c - input character value
*Return: 1 on success. -1 otherwise
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
