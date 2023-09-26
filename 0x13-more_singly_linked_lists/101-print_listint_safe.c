#include "lists.h"
#include <stdlibe.>


/**
 * print_listint_safe - Prints a listint_t linked list safely (handling loops).
 * @head: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head, *loop_start = NULL;
    size_t count = 0;

    if (!head)
        exit(98);

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            loop_start = slow;
            break;
        }
    }

    while (head && (head != loop_start || count == 0))
    {
        printf("%d\n", he
			ad->n);
        count++;
        if (head->next == loop_start && loop_start)
            break;
        head = head->next;
    }

    if (loop_start)
    {
        printf("LOOP: %d\n", loop_start->n);
        count++;
    }

    return count;
