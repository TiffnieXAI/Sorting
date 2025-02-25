/*
 * Program: Selection Sort with User Input and Validation
 * Description: This program allows the user to input an array size and elements.
 * It ensures valid integer inputs and sorts the array using the Selection Sort algorithm.
 * The program also offers an option to retry sorting with a new array.
 */

#include <stdio.h>

int main() {
    int getTry = 0, tryErr;

    do {
        int size, s_err;
        
        // Get the size of the array with input validation
        printf("Please Input Size: ");
        s_err = scanf("%d", &size);
        while (s_err != 1) {
            while (getchar() != '\n'); // Clear input buffer
            printf("Invalid! Input Size Again: ");
            s_err = scanf("%d", &size);
        }

        int a[size];
        
        // Get array elements with input validation
        for (int i = 0; i < size; i++) {
            printf("a[%d]: ", i);
            int err = scanf("%d", &a[i]);
            while (err != 1) {
                while (getchar() != '\n'); // Clear input buffer
                printf("Invalid! Input Number Again: ");
                err = scanf("%d", &a[i]);
            }
        }

        // Selection Sort Algorithm
        for (int i = 0; i < size - 1; i++) {
            int min = i;
            for (int j = i + 1; j < size; j++) {
                if (a[min] > a[j]) {
                    min = j;
                }
            }
            
            // Swap if a smaller element is found
            if (min != i) {
                int temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }

        // Display sorted array
        printf("Sorted Array Elements: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

        // Ask user if they want to retry
        printf("Try Again (1 - yes, 0 - no): ");
        tryErr = scanf("%d", &getTry);
        while (tryErr != 1 || getTry > 1 || getTry < 0) {
            while (getchar() != '\n'); // Clear input buffer
            printf("Input Values 0 or 1: ");
            tryErr = scanf("%d", &getTry);
        }
    
    } while (getTry == 1);
    
    printf("Thank you for trying the program!\n");
    return 0;
}
