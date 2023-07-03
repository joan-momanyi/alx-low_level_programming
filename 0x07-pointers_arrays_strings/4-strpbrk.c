#include "main.h"
/**
*_strpbrk -  locates the first occurrence in the string
*@s: input 
*@accept: input
*Return: always 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
