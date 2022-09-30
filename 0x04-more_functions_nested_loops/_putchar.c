#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
<<<<<<< HEAD
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
=======
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
>>>>>>> 7da833d1289639097ca51549f3c794aad26440de
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
