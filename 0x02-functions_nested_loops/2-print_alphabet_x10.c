#include "main.h"

/**
* print_alphabet_x10 - prints alphabets on ten different lines
*
* Return: Always 0
*
*/

void print_alphabet_x10(void)
{
	char a = 'a';
	char z = 'z';
	int i = 0;

	while (i < 10)
	{
		while (a <= z)
		{
			_putchar(a);
			a++;
		}

		i++;
		_putchar('\n');
	}
}
