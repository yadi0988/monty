#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @stack: stack_t type
 * @line_number: line number
 * Return: void
 **/

void rotl(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
  if (*stack == NULL || (*stack)->prev == NULL)
    return;

  queue->prev = *stack;
  (*stack)->next = queue;
  *stack = (*stack)->prev;
  (*stack)->next = NULL;
  queue = queue->prev;
  queue->prev = NULL;
}
