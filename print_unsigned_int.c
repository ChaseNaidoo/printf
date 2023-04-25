#include <stdio.h>
#include <stdarg.h>

/**
 * print_unsigned - prints an unsigned integer in the specified format
 * @format: conversion specifier character
 * @args: va_list containing the unsigned int to print
 *
 * Return: number of characters printed
 */

int print_unsigned(char format, va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);

	switch (format)
	{
		case 'u':
			return printf("%u", arg);
		case 'o':
			return printf("%o", arg);
		case 'x':
			return printf("%x", arg);
		case 'X':
			return printf("%X", arg);
		default:
			return 0;
	}
}
