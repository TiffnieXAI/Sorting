/*
 * @file bubblesort.c
 * @user-defined function for the Bubble Sort algorithm in C (ascending).
 * 
 * This program demonstrates the Bubble Sort algorithm, a simple 
 * comparison-based sorting technique that repeatedly swaps adjacent 
 * elements if they are in the wrong order. The process continues 
 * until the array is sorted.
 * 
 * Time Complexity:
 * - Worst-case: O(n^2) (when the array is sorted in reverse order)
 * - Best-case: O(n) (when the array is already sorted)
 * - Average-case: O(n^2)
 */
#include <stdio.h>
#include "bubblesort.h"

void bubbleSort(int array[], int size) {  // Remove 'static'
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
