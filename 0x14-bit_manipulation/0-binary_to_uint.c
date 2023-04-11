#include "main.h"

/**
* binary_to_uint - Binary to unit converstion
* @b: the binary string
*
* Return: the converted unit or zero if it fails
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		res <<= 1;
		res += *b++ - '0';
	}

	return (res);
}

