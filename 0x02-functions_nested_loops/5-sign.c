#include "main.h"

/**
*
* print_sign - main function call, prints positive, negative or zero
*
* @n: parameter
*
* Return: 1 if positive, 0 if Zero, -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
