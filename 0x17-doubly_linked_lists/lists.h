
/**

 * delete_dnodeint_at_index - deletes the node at index

 * of a dlistint_t linked list

 * @head: double point to head of linked list

 * @index: index of node to be deleted

 * Return: 1 if success, -1 if failure

 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{

  dlistint_t *current = *head;

  size_t size = 0;

  if (!*head)

    return (-1);

  while (current)

    {

      size++;

      current = current->next;

    }

  if (size < index + 1)

    return (-1);

  current = *head;

  if (!index)

    {

      *head = current->next;

      if (current->next)

	current->next->prev = NULL;

      current->next = NULL;

      free(current);

      return (1);

    }

  while (index--)

    current = current->next;

  current->prev->next = current->next;

  if (current->next)

    current->next->prev = current->prev;

  free(current);

  return (1);

}0;276;0c#ifndef LISTS_H

#define LISTS_H

#include <stdio.h>

#include <stdlib.h>

/**

 * struct dlistint_s - doubly linked list

 * @n: integer

 * @prev: points to the previous node

 * @next: points to the next node

 *

 * Description: doubly linked list node structure

 * for Holberton project

 */

typedef struct dlistint_s

{
  
  int n;
  
  struct dlistint_s *prev;
  
  struct dlistint_s *next;
  
}
  
  dlistint_t;

size_t print_dlistint(const dlistint_t *h);

size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

void free_dlistint(dlistint_t *head);

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

int sum_dlistint(dlistint_t *head);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
