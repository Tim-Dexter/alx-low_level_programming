#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed.
 */
void _print_rev_recursio(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
