#include"main.h"
/**
*puts2 - prints every other character of a string,
*starting with the first character, followed by a new line
*@str: input
*return: print
*/
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		length++;
	}
	i = length - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2  == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
