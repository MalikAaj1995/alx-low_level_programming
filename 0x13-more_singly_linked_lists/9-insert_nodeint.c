#include "lists.h"
/**
 * insert_nodeint_at_index - its inserts new node at a given position
 * @head: pointer the head of a listint_t
 * @n: data value of the new_node
 * @idx: the adress of new_node
 * Return: adress of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i = 0;

	new_node = *head;
	new_node->n = n;

	if (*head != NULL && i != idx)
	new_node = (*head)->next;

	if (*head != NULL && i == idx)
	return (new_node);
	return (NULL);
}
