#include "main.h"

/**
 *puts_recursion - Print a string followed by a new line
 *@s: the string to print
 *Return: Nothing.
 */
void _puts_recursion(char *s)
{
if (*S == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
