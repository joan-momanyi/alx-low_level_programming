#include "main.h"
/**
* main - computes the absolute value of an integer
*
*Return: absolute value
*/
int _abs(int a)
{
	if (a <= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
