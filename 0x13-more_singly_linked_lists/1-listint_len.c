#include "lists.h"

/**
 * listint_len - Prints all the elements of a listint_t list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
