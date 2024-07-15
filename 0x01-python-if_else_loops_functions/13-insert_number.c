#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: double pointer to the head of the list
 * @number: number to be added to the list
 *
 * Return: the address of the number added to the list
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node_ptr = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = number;

	if (node_ptr == NULL || node_ptr->n >= number)
	{
		new_node->next = node_ptr;
		*head = new_node;
		return (new_node);
	}

	while (node_ptr && node_ptr->next && node_ptr->next->n < number)
		node_ptr = node_ptr->next;

	new_node->next = node_ptr->next;
	node_ptr->next = new_node;
	return (new_node);
}
