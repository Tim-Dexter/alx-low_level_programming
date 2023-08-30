#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list.
 * @head: first node in the listint_t linked list.
 * @index: index of node to return.
 *
 * Return: a pointer to the node I am  looking for, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)

	{

	temp = temp->next;

	i++;

	}

	return (temp ? temp : NULL);

}
