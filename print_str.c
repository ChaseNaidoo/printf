#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_str - prints a string
 *
 * @args: va_list containing the string to print
 * @buffer: buffer to store the printed string
 * @buffer_index: index of the buffer to start printing from
 *
 * Return: number of characters printed
 */
int print_str(va_list args, char *buffer, unsigned int buffer_index)
{
	unsigned int i;
	char *s;

	s = va_arg(args, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
	buffer[buffer_index + i] = s[i];
	}
	return (i);
}
