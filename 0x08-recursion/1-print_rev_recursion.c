#include "main.h"

/**
* _print_rev_recursion - print a sring in reverse
* @string
* return 0
*/

int (void) _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
