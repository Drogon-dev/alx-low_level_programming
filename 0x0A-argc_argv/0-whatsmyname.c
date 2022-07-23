#include "main.h"
#include <stdio.h>

/**
 * main - returns the name of the program
 * @argc: the number of arguments passed
 * including the program name
 * @argv: array of string of the arguments argc
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
