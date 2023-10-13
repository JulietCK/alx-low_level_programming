#include "main.h"
/**
 * checks for a digit(0 through 9)
 *
 * Return 0 or 1
 */

int _isdigit(int c)
{
	if (!c)
		return (0);

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}	


