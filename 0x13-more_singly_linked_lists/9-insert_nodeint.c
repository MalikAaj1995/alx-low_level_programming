#include "lists.h"
/**
 * insert_nodeint_at_index - its inserts new node at a given position
 * @head: pointer to the listint_t
 * @index: start at 0
 * @idx: is the index of the list where  the node should be added
 * Return1: the adress of the new node or NULL if it failed
 * Return2: return NULL , if its not possible to add the new node
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
