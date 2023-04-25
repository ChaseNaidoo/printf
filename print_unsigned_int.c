#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_unsigned - prints an unsigned integer
 *
 * @args: arguments passed to the function
 * Return: the number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int divisor = 1, remainder = 0;
	int digit = 0, count = 0;

	/* Determine the divisor */
	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	/* Print the number */
	while (divisor != 0)
	{
		remainder = num % divisor;
		digit = (num / divisor) % 10;
		count += _putchar(digit + '0');
		divisor /= 10;
	}

	return (count);
}
