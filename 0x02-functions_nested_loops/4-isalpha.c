#include "main.h"

/**
* _isalpha - main function call
* @c: parameter to compare
* Return: 1 if True, 0 if False
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
