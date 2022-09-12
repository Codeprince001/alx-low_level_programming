#include <stdio.h>

/**
*
* main - Print alphabet exempting q and e
*
* Return: always 0
*/

int main(void)
{
	char a;

	for( a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
