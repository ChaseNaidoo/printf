#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_string - priints the string to stdout
 *
 * @args: variable argument list
 *
 * Return: the number of characters that were written to standard output
 *
 */
int print_string(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	str = "(null)";

	for (int i = 0; str[i]; i++)
	{
	if (str[i] < 32 || str[i] >= 127)
		{
		count += write(1, "\\x", 2);
		count += print_hex(str[i], 2);
		}
		else
		{
		count += write(1, &str[i], 1);
		}
	}
	return (count);
}

/**
 * print_hex - helper function for print_string
 *
 * @c: input characters
 * @size: size of input string
 *
 * Return: the converted characters
 *
 */
int print_hex(unsigned char c, int size)
{
	int i;
	int count = 0;
	char digits;
	char hex[2];

	digits = "0123456789ABCDEF";

	for (i = size - 1; i >= 0; i--)
	{
	hex[i] = hex_digits[c % 16];
	c /= 16;
	}

	for (i = 0; i < size; i++)
	{
	count += write(1, &hex[i], 1);
	}
	return (count);
}
