#include "monty.h"

/**
 * _free - function
 * Return: void
 **/

void _free()
{
  stack_t *temp;

  while (stack != NULL)
    {
      temp = stack;
      stack = stack->prev;
      free(temp);
    }
}
