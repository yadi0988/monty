#include "monty.h"


/**
 * _strcmp - custom strcmp
 * Return: int
 **/

int _strcmp(int i)
  {
    if (mode != NULL && i == 1)
      return (strcmp(mode, "queue"));
    else if (mode != NULL && i == 0)
      return (strcmp(mode, "stack"));
    return (1);
  }

/**
 * processor - function
 * @file_name: file name
 * @line_number: line number
 * Return: void
 **/

void processor(char *file_name, unsigned int line_number)
  {
    FILE *fp;
    int read;
    size_t n = 0;
    char *value_str;
    void (*f_ptr)(stack_t **stack, unsigned int line_number);
    mode = NULL;
    stack = NULL;
    queue = NULL;
    top = NULL;


    fp = fopen(file_name, "r");
  if (fp == NULL)
    {
      fprintf(stderr, "Error: Can't open file %s\n", file_name);
      exit(EXIT_FAILURE);
    }


  while (1)
    {
      read = getline(&line, &n, fp);
   if (read == -1 && ferror(fp))
    {
      fprintf(stderr, "Error: getline failed\n");
      exit(EXIT_FAILURE);
    }
   else if (read == -1)
     {
       break;
     }
  line_number++;

  opcode = strtok(line, " \n");
  if (!strcmp(opcode, "queue") && _strcmp(1))
    {
      if (mode != NULL || stack != NULL)
	{
	  if (mode != NULL)
	  free(mode);
  
	  queue = stack;
	}
      mode = strdup(opcode);
      continue;
    }
  else if (!strcmp(opcode, "stack") && _strcmp(0))
    {
      if (mode != NULL)
	{
	  free(mode);
	  stack = queue;
	}
      mode = strdup(opcode);
      continue;
    }

  if (opcode[0] != '#')
    {
      value_str = strtok(NULL, " \n");
      value = check_value_str(value_str);

      f_ptr = get_func(opcode);

      if (f_ptr == NULL)
	{
	  fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	  exit(EXIT_FAILURE);
	}

      f_ptr(&stack, line_number);
    }

  
  }
  _free();
  fclose(fp);
  }
