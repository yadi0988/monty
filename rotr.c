#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @stack: stack_t type
 * @line_number: line number
 * Return: void
 **/

void _rotr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
  if (*stack == NULL || (*stack)->prev == NULL)
    return;

  queue->prev = *stack;
  (*stack)->next = queue;
  queue = queue->next;
  *stack = (*stack)->next;
  queue->prev = NULL;
}
