#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * Only print one argument per line, ending with a new line
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 * int main(int __attribute__((__unused__)) argc, char *argv[])
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
