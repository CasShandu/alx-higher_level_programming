#include "lists.h"
#include <stdio.h>
#include <stddef.h>

void reverse(listint_t **head);
int check_lists(listint_t *head, listint_t *middle, int len);

/**
 * is_palindrome - checks a singly list for palindrome
 * @head: pointer to the first node
 * Return: None if not a palindrome and 1 if it is
 */

int is_palindrome(listint_t **head)
{
	int len, i;
	listint_t *tmp;
	listint_t *middle;

	if (head == NULL || *head == NULL)
		return (1);
	tmp = *head;
	middle = *head;

	for (len = 0; tmp != NULL; len++)
		tmp = tmp->next;

	len = len / 2;

	for (i = 1;  i < len; i++)
		middle = middle->next;
	if (len % 2 != 0 && len != 1)
	{
		middle = middle->next;
		len = len - 1;

	}
	reverse(&middle);
	i = check_lists(*head, middle, len);

	return (i);
	
}

/**
 * check_lists - checks the two lists
 * @head: pointer to the head node
 * @len: length of the list
 * Return: if the same 1, if not 0
 */

int check_lists(listint_t *head, listint_t *middle, int len)
{
	int i;

	if (head == NULL || middle == NULL)
		return (1);
	for (i = 0; i < len; i++)
	{
		if (head->n != middle->n)
			return (0);
		head = head->next;
		middle = middle->next;

	}
	return (1);

}

/**
 * reverse - reverse a list
 * @head: pointer to the head in reverse
 */

void reverse(listint_t **head)
{
	listint_t *current;
	listint_t *next;
	listint_t *prev;

	if (head == NULL ||*head == NULL)
		return;

	prev = NULL;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	
	}
	 *head = prev;
}
