#include "main.h"
#include <stdlib.h>

/**
 * print_func - selects the correct function for _printf.c
 *
 * @s: operator passed as argument
 *
 * Return: pointer to the function given
 *
 */
int (*print_func(const char *s))(va_list, char *, unsigned int)
{
	print_t printer[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{0, NULL}
};

	int i = 0;

	while (printer[i].handler != NULL)
	{
	if (*s == *(printer[i].format_char))
	return (printer[i].handler);
	i++;
	}
	return (NULL);
}
