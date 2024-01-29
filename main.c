#include "monty.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of argument
 * @argv: arguments
 * Return: int
 **/

int main(int argc, char *argv[])
{
  if (argc != 2)
    {
      fprintf(stderr, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }

  processor(argv[1], 0);
  free_dlist();
  
  return (0);
}
