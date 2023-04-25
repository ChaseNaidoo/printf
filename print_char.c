#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_char - prints a single character to standard output
 *
 * @args: variable argument list
 *
 * Return: the number of characters written
 *
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
