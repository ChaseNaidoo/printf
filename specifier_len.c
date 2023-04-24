#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * specifier_len - gets the length of a format specifier
 *
 * @specifier: pointer to the format specifier
 *
 * Return: length of the format specifier
 *
 */
int specifier_len(const char *specifier)
{
	int len = 0;

	while (*specifier && (*specifier == 'c' || *specifier == 's' || *specifier == '%'))
	{
	len++;
	specifier++;
	}
	return (len);
}
