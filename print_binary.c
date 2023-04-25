#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_binary - converts an argument to binary and prints to stdout
 *
 * @args: variable argument list
 *
 * Return: the number of characters that were written to standard output
 *
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int binary[32];
	int i = 0;
	int count = 0;
	int j;
	char c;

	while (n > 0)
	{
	binary[i] = n % 2;
	n = n / 2;
	i++;
	}

	if (i == 0)
	{
	binary[i] = 0;
	i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
	c = binary[j] + '0';

	write(1, &c, 1);
	count++;
	}

	return (count);
}
