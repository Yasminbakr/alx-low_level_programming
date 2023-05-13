#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector array of strings that hold argument
  *
  * Return: 1 if error and 0 if ok
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
