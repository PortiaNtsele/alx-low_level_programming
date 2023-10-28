#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * This function takes a character 'c' and writes it to the standard output.
 * It uses the 'write' system call to accomplish this.
 *
 * Return: On success, it returns 1 (the number of characters written).
 * On error, it returns -1, and 'errno' is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
