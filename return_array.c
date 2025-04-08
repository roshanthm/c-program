#include <stdio.h>
#include <stdlib.h>


int* createArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int)); // Allocate memory for array
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // Fill array with values (1, 2, 3, ...)
    }
    return arr; // Return pointer to the array
}

int main() {
    int size = 3;
    int* array = createArray(size); 

    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); 
    }
    printf("\n");

    free(array); // Free memory after use
    return 0;
}
