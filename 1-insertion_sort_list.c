#include "sort.h"
/*
*insert sort implementation
* Parameters
* - list a double pointer to a structures list
*/

void insertion_sort_list(listint_t **list) {
    listint_t *sorted = NULL;
    listint_t *current = *list;

    while (current != NULL) {
        listint_t *next = current->next;

        if (sorted == NULL || sorted->n >= current->n) {
            current->next = sorted;
            sorted = current;
        } else {
            listint_t *temp = sorted;
            listint_t *prev = NULL;

            while (temp != NULL && temp->n < current->n) {
                prev = temp;
                temp = temp->next;
            }

            if (prev != NULL) {
                prev->next = current;
                current->next = temp;
            } else {
                current->next = sorted;
                sorted = current;
            }
        }

        print_list(*list);
        current = next;
    }

    *list = sorted;
}
