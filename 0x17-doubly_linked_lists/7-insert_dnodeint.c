#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: doub;e pointer to the first node
 * @idx: index to insert the node
 * @n: data for the new node
 * 
 * Return: pointer to the first node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *new_node;
	
	if (!*h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	
	temp = *h;
	for (i = 1; i < idx; i++)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
	}
	
	new_node->n = n;	
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	temp = new_node;
	new_node = NULL;
	free(new_node);

	return (temp);
}
