#include "main.h"
/**
  * main - entry point of the program
  * @argc: count of the arguments
  * @argv: command line arguments
  * Return: 0
  */
int main(int argc, char **argv)
{
	FILE *file;
	stack_t *stack = NULL;
	size_t n = 0;
	char *line = NULL;
	ssize_t readline = 1;
	counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[2], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Can't open file %s", argv[2]);
		exit(EXIT_FAILURE);
	}
	while (readline != -1)
	{
		readline = getline(&line, &n, file);
		if (line == NULL)
			continue;
		counter++;
		execute_command(line, counter, *stack);
	}
	free(line);
}
