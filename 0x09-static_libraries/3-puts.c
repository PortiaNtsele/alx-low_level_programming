#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string to the standard output followed by a new line.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
/* Iterate through the string and print each character */
while (*str != '\0')
{
putchar(*str);
str++;
}
/* Print a new line character to move to the next line */
putchar('\n');
}
/**
 * main - Entry point of the program
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}
