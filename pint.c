#include "monty.h"

/**
 * pint - function top print
 * @stack: stract type
 * @line_number: line number
 * Return: void
 **/

void pint(stack_t **stack, unsigned int line_number)
{
  stack_t *temp;
  if (!stack)
    return;
  temp = *stack;

  if (temp == NULL)
    {
      fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
      exit(EXIT_FAILURE);
    }

  printf("%d\n", temp->n);
}
