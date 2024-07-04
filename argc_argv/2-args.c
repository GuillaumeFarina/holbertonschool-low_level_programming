#include <stdio.h>

/**
 * main - Write 'program that prints its name'
 * @argc: Count of number argument
 * @argv: Array of string
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
