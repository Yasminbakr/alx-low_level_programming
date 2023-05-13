#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success or 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int ar[argc];

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ar[i]  = isdigit(argv[i]);
			if (ar[i] == 0)
			{
				printf("Error\n");
				return (1);
			}

			else
			{
				sum = sum + atoi(argv[i]);
				printf("%d\n", sum);
			}
		}
	}
	return (0);
}



