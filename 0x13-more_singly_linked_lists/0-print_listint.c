#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *listint_t  print all the elements of a list.
 *@h: pointer to the listint_t list.
 *
 *Return :number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
	printf("%d\n", h->n);
	n++;
        h = h->next;
	}
	return (n);
}
