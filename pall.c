#include "monty.h"


/**
 * modes - modes
 * @temp: stack_t type
 * Return: void
 **/

void modes(stack_t *temp)
{
  while (temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp->prev;
    }
}


/**
 * pall - function
 * @stack: struct
 * @line_number: line number
 * Return: void
 **/

void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
  if (*stack == NULL && queue == NULL)
    return;

  if (!strcmp(mode, "queue"))
      modes(queue);
  else
      modes(*stack);
}
