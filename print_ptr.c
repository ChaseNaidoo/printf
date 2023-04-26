#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_ptr - prints a pointer in hexadecimal format
 *
 * @args: va_list containing a void pointer argument
 *
 * Return: number of characters printed
 *
 */
int print_ptr(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int value;
	int count = 0;
	char *prefix = "0x";

	value = (unsigned long int)ptr;
	count += write(1, prefix, 2);
	count += print_hexstr(value, sizeof(void *) * 2);

	return (count);
}
