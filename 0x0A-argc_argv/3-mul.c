#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)

{

int var1, var2, result;

if (argc != 3)

{

printf("Error\n");

return (1);

}

else

{

var1 = atoi(argv[1]);

var2 = atoi(argv[2]);

output = var1 *var2;

printf("%d\n", output);

return (0);

}

}
