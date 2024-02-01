#include "monty.h"


/**
 * push - function
 * @stack: struct pointer
 * @line_number: line num
 * Return: void
 **/

void push(stack_t **stack, unsigned int line_number)
{
  stack_t *new_node = malloc(sizeof(stack_t));
  if (new_node == NULL)
    {
      fprintf(stderr, "Error: malloc failed\n");
      exit(EXIT_FAILURE);
    }
  if (value == -1)
    {
      fprintf(stderr, "L%d: usage: push integer\n", line_number);
      exit(EXIT_FAILURE);
    }

  new_node->n = value;
  new_node->prev = NULL;
  new_node->next = NULL;

  if (!_strcmp(1))
    {
      if (top == NULL)
	{
	  top = new_node;
	  queue = top;
	}
      else
	{
	  top->prev = new_node;
	  new_node->next = top;
	  top = new_node;
	}
      return;
    }

  if (*stack == NULL)
    {
      (*stack) = new_node;
      top = new_node;
    }
  else
    {
      (*stack)->next = new_node;
      new_node->prev = *stack;
      (*stack) = new_node;
    }
}
