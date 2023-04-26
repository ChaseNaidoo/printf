#include "main.h"
#include <stdlib.h>

/**
 * *get_print_func - Makes an argument from *format and points accordingly
 * @format: String
 * Return: corresponding print_func pointer or NULL if not found
 */

int (*get_print_func(const char *format))(va_list)
{
	format_t formats[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pct},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned_int},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'S', print_string},
		{'p', print_ptr},
		{0, NULL}
	};

	int i;

	for (i = 0; formats[i].format != 0; i++)
	{
		if (formats[i].format == *format)
		{
		return (formats[i].print_func);
		}
	}
	return (NULL);
}
