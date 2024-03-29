#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to std output.
 * @c: the character to print
 *
 * Retun: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
