#include "main.h"
/**
 * _abs - print postive or negative
 * @a: user input
 * Return: Success (0) or (1)
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
