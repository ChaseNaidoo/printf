#include "main.h"
#include <stdio.h>

/**
 * main - test for _printf functionality.
 *
 * Return: 0 (success)
 *
 */
int main (void)
{
	int c;

	c = _printf("Test Passed.\n");
	c = printf("Test Passed.\n");

	return (0);
}
