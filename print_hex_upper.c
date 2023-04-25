#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_hex_upper - prints a hexadecimal number in uppercase
 *
 * @args: arguments passed to the function
 * Return: the number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char hex[100];
	int i = 0, count = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (num != 0)
	{
		int remainder = num % 16;
		if (remainder < 10)
			hex[i] = remainder + 48;
		else
			hex[i] = remainder + 55;

		num /= 16;
		i++;
	}

	count += _printf("0X");
	while (i--)
		count += _putchar(hex[i] & (~32));

	return (count);
}
