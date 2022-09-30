#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * Only print one argument per line, ending with a new line
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 * int main(int __attribute__((__unused__)) argc, char *argv[])
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		res = res * atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
