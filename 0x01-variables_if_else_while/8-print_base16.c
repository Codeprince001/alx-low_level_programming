#include <stdio.h>

/**
* main - entry point
*
* Return: 0
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 15; i++)
	{
		j = i % 16;
		if (j < 10)
		{
			putchar(j + '0');
		}
		else
		{
			putchar(r + 87);
		}
	}
	putchar('\n');
	return (0);
}
