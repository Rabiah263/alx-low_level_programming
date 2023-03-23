#include <unistd.h>

/**
 * _putchar - writes the charactar c to stdout
 * @c: The character to print
 *
 * Return: 1 always (success)
 *
 * On error, -1 is returned, and errno is set appropriatly.
 */

int _putchar(char c)
{

        return (write(1, &c, 1));
}
