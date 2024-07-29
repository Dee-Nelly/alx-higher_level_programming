#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list
 * @head: doouble pointer to head of list
 *
 * Return: pointer to head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *current, *reversed;

	temp = current = *head;
	reversed = NULL;

	while (current)
	{
		temp = temp->next;
		current->next = reversed;
		reversed = current;
		current = temp;
	}
	return (reversed);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to head of list
 *
 * Return: 1 if palindrome, 0 if not palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *fast, *slow, *reversed, *current;

	fast = slow = current = *head;
	if (*head)
	{
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		reversed = slow = reverse_listint(&slow);

		while (reversed)
		{
			if (current->n != reversed->n)
				return (0);
			current = current->next;
			reversed = reversed->next;
		}

	reverse_listint(&slow);

	}
	return (1);
}
