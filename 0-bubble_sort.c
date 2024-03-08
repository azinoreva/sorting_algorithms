#include <stddef.h>
#include <stdio.h>
#include "sort.h"

/*
 * bubble_sort: implementation with print_array function.
 *
 * Parameters:
 *   - array: Pointer to the array to be sorted.
 *   - size: Number of elements in the array.
 */

void bubble_sort(int *array, size_t size)
	{
		unsigned long int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					int temp = array[j];

					array[j] = array[j + 1];

					array[j + 1] = temp;

					print_array(array, size);

				}
			}
		}
	}

