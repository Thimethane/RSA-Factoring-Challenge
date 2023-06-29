#include "main.h"

/**
 * main - Entry point.
 * @argc: Number of argumets
 * @argv: An array of input string
 *
 * Return: Always 0 (On Success)
 */
int main(int argc, char *argv[])
{
	FILE *file;
	unsigned long num;

	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		return (1);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Failed to open file\n");
		return (1);
	}
	while (fscanf(file, "%lu", &num) == 1)
		factorize(num);
	fclose(file);
	return (0);
}
