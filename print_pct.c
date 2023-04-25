#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_pct - prints a % to the standard output
 *
 * @args: variable argument list
 *
 * Return: the number of characters written
 *
 */
int print_pct(va_list args __attribute__((unused)))
{
	return (write(1, "%", 1));
}
