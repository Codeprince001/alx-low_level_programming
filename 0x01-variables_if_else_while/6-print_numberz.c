#include <stdio.h>

/**
* main - print single digits of base 10
*
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
