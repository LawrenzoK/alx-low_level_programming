#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments passed
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	write(STDOUT_FILENO, argv[0], strlen(argv[0]));
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
