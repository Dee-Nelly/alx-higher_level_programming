#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle
 * @list: a pointer to the first node
 *
 * Return: 1 if there is a cycle and 0 if no cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	if (list == NULL || list->next == NULL)
		return (0);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (1);
	}
	return (0);
}
