#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to the listsint_t
 * @index: the index of node starting at 0
 *
 * Return: if  the node doesn't exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	if (node != NULL && i == index)
		return (node);
	return (NULL);
}
