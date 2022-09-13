#include "main.h"

/**
* _islower - function call
* @c: parameter to compare
*
* Return: 1 if true, else 0 if false
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
