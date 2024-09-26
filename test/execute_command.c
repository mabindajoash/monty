#include "main.h"
/**
  * execute_command - execute the line parsed from the file
  * @line: line passed
  * @stack: pointer to the stack
  * @line_number: line number;
  * Return: 0 if succesfull
  */
int execute_command(char *line, char **stack, unsigned int line_number)
{
	instruction_t get = {
		{"push", push(*stack, line_number)}
		{"pall", pall(*stack, line_number)}

	}
	char *token;
	int i = 0;

	token = strtok(line, "\n,\t");
	while (token != NULL)
	{
		while (get.opcode[i] != NULL)
		{
			if (strncmp(get.opcode, token, strlen(get.opcode[i])) == 0)
			{
				get.f[i];
			}
		}
	}
}
