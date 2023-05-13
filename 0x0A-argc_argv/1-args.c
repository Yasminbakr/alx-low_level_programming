#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count of arguments
 * @argv: argument vector array of strings that hold argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
