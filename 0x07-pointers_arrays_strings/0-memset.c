#include "main.h"
/**
*_memset - function that fills memory with a constant byte
*@s: memory area to be pointed to
*@b: constant byte
*@n: number of bytes in the memory
*Return: changed array with new value of n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
