#include <stdlib.h>
#include "main.h"

/**
 * _isupper - checks uppercase characters
 *
 * @c: character to check
 *
 * Return: 1 if uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (!c)
		return (0);

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
