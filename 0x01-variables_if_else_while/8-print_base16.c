#include <stdio.h>

/**
* main - entry point
*
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
		putchar(a);
		if (a == 10)
			putchar('0' + a);
	putchar('\n')
	return (0);
