/** 
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Bubble / Shell Sorts
 * ===========================================================
 */
#include "sortfuncts.h"
#include <stdlib.h>
#include <stdio.h>

// Bubble Sort
void bubbleSort(int numbers[], int numbersSize) {
}

// Shell Sort
void shellSort(int numbers[], int numbersSize, int gapValues[], int gapSize) {
}

// fills an array of size n with random values
void fillArray(int array[]) {
    // fill array with random ints from 0 to 29
    for (int i = 0; i < N; i++) {
        array[i] = (int)random() % 30;
    }
}

void printArray(int nums[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
