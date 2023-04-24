#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_pct - prints a percent sign
 *
 * @args: va_list (unused)
 * @buffer: buffer to store the printed percent sign
 * @buffer_index: index of the buffer to start printing from
 *
 * Return: number of characters printed
 */
int print_pct(char *buffer, unsigned int buffer_index)
{
	buffer[buffer_index] = '%';
	return (1);
}
