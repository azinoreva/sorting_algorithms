# Sorting Algorithms Project Readme

## Files:

1. **sort.h**
   - Header file containing the prototypes of the functions `print_array` and `print_list`.
   - Defines the data structure `listint_t` for doubly linked lists.

2. **print_array.c**
   - Contains the implementation of the function `print_array`.
   - Takes an array and its size as input and prints the elements.

3. **print_list.c**
   - Contains the implementation of the function `print_list`.
   - Takes a doubly linked list as input and prints its elements.

4. **0-bubble_sort.c**
   - Implementation of the Bubble sort algorithm for sorting an array in ascending order.
   - Function: `void bubble_sort(int *array, size_t size);`
   - Prints the array after each swap.

5. **0-O**
   - Contains the big O notations of the time complexity of Bubble sort:
     - Best case
     - Average case
     - Worst case

6. **1-insertion_sort_list.c**
   - Implementation of the Insertion sort algorithm for sorting a doubly linked list in ascending order.
   - Function: `void insertion_sort_list(listint_t **list);`
   - Prints the list after each swap.

7. **1-O**
   - Contains the big O notations of the time complexity of Insertion sort:
     - Best case
     - Average case
     - Worst case

8. **2-selection_sort.c**
   - Implementation of the Selection sort algorithm for sorting an array in ascending order.
   - Function: `void selection_sort(int *array, size_t size);`
   - Prints the array after each swap.

9. **2-O**
   - Contains the big O notations of the time complexity of Selection sort:
     - Best case
     - Average case
     - Worst case

10. **3-quick_sort.c**
    - Implementation of the Quick sort algorithm using the Lomuto partition scheme.
    - Function: `void quick_sort(int *array, size_t size);`
    - Prints the array after each swap.

11. **3-O**
    - Contains the big O notations of the time complexity of Quick sort:
      - Best case
      - Average case
      - Worst case

## How to Test:

- Use the provided test files (e.g., 0-main.c, 1-main.c, 2-main.c, 3-main.c) to test the sorting algorithms with different input arrays or linked lists.
- Compile the files using a C compiler (e.g., gcc) and run the executables to observe the sorting process and final results.

**Note:** Ensure that the provided header file (sort.h) is included, and the data structures and functions are correctly declared.
