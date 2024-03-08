#include "sort.h"

/* 
* selection_sort - An algorithm that implements selection
Parameters: array  and size of array
*/

void selection_sort(int *array, size_t size) {
    size_t min;
    size_t j;
    size_t i;

    for (i = 0; i < size - 1; i++) {
        min = i;

        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }

        print_array(array, size);
    }
}

