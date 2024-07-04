#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write 'program that prints its name'
 * @argc: Count of number argument
 * @argv: Array of string
 * Return: 1 if not receive two arguments, 0 otherwise
 */

int main(int argc, char **argv)
{
	int number1 = 0;
	int number2 = 0;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = (number1 * number2);
		printf("%d\n", result);
	}
	return (0);
}
