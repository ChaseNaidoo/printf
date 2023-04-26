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
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	str = "(null)";

	for (i = 0; str[i]; i++)
	{
	if (str[i] < 32 || str[i] >= 127)
		{
		count += write(1, "\\x", 2);
		count += print_hexstr(str[i], 2);
		}
		else
		{
		count += write(1, &str[i], 1);
		}
	}
	return (count);
}

/**
 * print_hexstr - helper function for print_string
 *
 * @c: input characters
 * @size: size of input string
 *
 * Return: the converted characters
 *
 */
int print_hexstr(unsigned char c, int size)
{
	int i;
	int count = 0;
	char digits[] = "0123456789ABCDEF";
	char hex[2];

	for (i = size - 1; i >= 0; i--)
	{
	hex[i] = digits[c % 16];
	c /= 16;
	}

	for (i = 0; i < size; i++)
	{
	count += write(1, &hex[i], 1);
	}
	return (count);
}
