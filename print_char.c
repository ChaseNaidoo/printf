#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a character
 *
 * @args: character to print
 * @buffer: stores the printed character
 * @buffer_index: index of the buffer to start printing from
 *
 * Return: number of characters printed (1)
 *
 */
int print_char(va_list args, char *buffer, unsigned int buffer_index)
{
	char c;

	c = va_arg(args, int);
	buffer[buffer_index] = c;
	return (1);
}
