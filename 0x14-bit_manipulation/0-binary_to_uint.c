#include "main.h"

/**
 * binary_to_uint -this function converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: unsigned int with decimal value of binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; b++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		val = 2 * val + (b[x] - '0');
	}

	return (val);
}
