#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* Stores the original list's head for later */
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int p;

	/* Provided pointer targets a NULL memory address. */
	if (*head == NULL)
	{
		return (-1);
	}
	/* Existing list head so we save it. */
	saved_head = *head;
	/* Index position to look for element to delete. */
	p = 0;
	/* We traverse until reaching position to delete if exists. */
	/* By moving our "working head" to the next */
	while (p < index && *head != NULL)
	{
		/* Reminder: needs to put parenthesis to have the  */
		/*   correctly associated to "head" and not "head->next" */
		*head = (*head)->next;
		p++;
	}
	/* We never found the index in list. */
	if (p != index)
	{
		*head = saved_head;
		return (-1);
	}
	/* Index 0 means we cut the "current head" so we must */
	/*   redefine the new list's head */
	if (0 == index)
	{
		/* We "grab" the "future new head" */
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	else
	{
		tmp = *head;
		/* WRONG, must link "far previous to the next "*/
		(*head)->prev->next = (*head)->next;
		/* Wrong placement for free instruction we are not finished yet */
		/* free(*head); */
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		/* ONLY after we "replugged links without node to delete can we delete" */
		free(tmp);
		*head = saved_head;
	}
	return (1);
}
