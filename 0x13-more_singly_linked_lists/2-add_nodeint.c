2-add_nodeint.c
Who has access
O
System properties
Type
C
Size
414 bytes
Storage used
414 bytes
Location
0x13-more_singly_linked_lists
Owner
Ojo Samuel
Modified
Oct 23, 2022 by Ojo Samuel
Opened
1:17 AM by me
Created
Oct 24, 2022
No description
Viewers can download

#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}


