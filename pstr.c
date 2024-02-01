#include "monty.h"

/**
 * pstr - print string
 * @stack: stack_t type
 * @line_number: line number
 * Return: void
 **/

void pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
  stack_t *temp = *stack;
  int _value = temp->n;
  if (*stack == NULL)
    {
      printf("\n");
      return;
    }

  while (temp != NULL)
    {
      if (!(_value < 0 && _value > 127) &&  !(_value == 0))
	break;
      printf("%c", (char)temp->n);
      temp = temp->prev;
    }

  printf("\n");
}
