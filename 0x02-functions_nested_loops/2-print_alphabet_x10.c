#include "main.h"

/**
* print_alphabet_x10 - prints alphabets on ten different lines
*
* Return: Always 0
*
*/

void print_alphabet_x10(void)
{
	char a;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
