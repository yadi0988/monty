#include "monty.h"

/**
 * add - add top two element
 * @stack: struct type
 * @line_number: line number
 * Return: void
 **/

void add(stack_t **stack, unsigned int line_number)
{
  stack_t **mod_QS;

  if (!_strcmp(1))
    mod_QS = &queue;
  else
    mod_QS = stack;

  if (*mod_QS == NULL || (*mod_QS)->prev == NULL)
    {
      fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }

  (*mod_QS)->prev->n += (*mod_QS)->n;
  *mod_QS = (*mod_QS)->prev;
}
