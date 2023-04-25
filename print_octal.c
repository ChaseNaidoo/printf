#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_octal - prints an octal number
 *
 * @args: arguments passed to the function
 * Return: the number of characters printed
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int octal_num = 0, i = 1;
	int count = 0;

	while (num != 0)
	{
		octal_num += (num % 8) * i;
		num /= 8;
		i *= 10;
	}

	count += _printf("%u", octal_num);

	return (count);
}
