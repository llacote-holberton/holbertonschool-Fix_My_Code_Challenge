#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	printf("Prints the doubly linked list post-creation\n");
	print_dlistint(head);
	printf("-----------------\n");
	printf("Removing element at position 5 (value 98)\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");
	printf("Removing head element (value 0)\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	printf("Removing head element (value 1)\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	printf("Removing head element (value 2)\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	printf("Removing head element (value 3)\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	printf("Removing head element (value 4)\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	printf("Removing head element (value 402)\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	free_dlistint(head);
	return (0);
}
