#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write 'program that adds positive numbers'
 * @argc: Count of number argument
 * @argv: Array of string
 * Return: 1 if Error, 0 if works
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int index = 1;
	int a = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; index < argc; index++)
	{
		for (a = 0; argv[index][a] != '\0'; a++)
		{
			if (!isdigit(argv[index][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}

	printf("%d\n", sum);
	return (0);
}
