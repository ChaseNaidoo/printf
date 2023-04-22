# _printf
Function that produces output according to a format.
- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives.

## Handles the following conversion specifiers:
- c
- s
- %
- d
- i
- b
- u
- o
- x
- X
- p

## Use a local buffer of 1024 chars in order to call write as little as possible.

## Handles the following custom conversion specifier:
- S: prints the string.
- r: prints the reverse string.
- R: prints the rot13'ed string.

## Handles the following flag characters for non-custom conversion specifiers:
- +
- space
- #
- 0
- -

## Handles the following length modifiers for non-custom conversion specifiers:
- l
- h

## Handles the field width for non-custom conversion specifiers.

## Handles the precision for non-custom conversion specifiers.
