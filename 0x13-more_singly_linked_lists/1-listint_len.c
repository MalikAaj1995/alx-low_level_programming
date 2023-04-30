#include "lists.h"

/**
 * listint_len - returns the number of elements in linked listint_t list
 * @h: pointer to listint_t
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
