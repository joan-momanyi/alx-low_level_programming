#include "main.h"
/**
*_memcpy - function that copies memory area
*@dest:memory area to copy to
*@src: memory area to copy from
*@n: bytes to be copied
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
