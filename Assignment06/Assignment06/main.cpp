//
//  main.cpp
//  Assignment06
//
//  Created by Yuki Ogawa on 6/23/21.
//

#include <iostream>
#include <stdlib.h>
#define SIZE 10

void swap (int *a, int *b);
void findMaxAndPosition(int arr[], int size, int* max, int* pos);
float * createArray(int size);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Exercise 02
    float arr[SIZE] = {1.5, 2.5, 3.7, 4.4, 5.3, 6.3, 7.4, 8.2, 9.5, 10.5};
    float * ptr = NULL;
    float sum = 0;
    
    for(int i = 0; i < SIZE; i++) {
        ptr = &arr[i];
        sum += *ptr;
    }
    
    float avg = sum / SIZE;
    printf("The average = %f\n", avg);
    
    // Exercise 03
    int intArray[SIZE] = {1, 14, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = intArray[0];
    int pos = 0;
    
    findMaxAndPosition(intArray, SIZE, &max, &pos);
    printf("max: %d\n", max);
    printf("pos (starts from 0): %d\n", pos);
    
    // Exercise 04 & 05
    float * ptr5 = createArray(SIZE);
    for(int i = 0; i < SIZE; i++) {
        printf("%f ", ptr5[i]);
    }
    free(ptr5);
    
    
    std::cout << "Hello, World!\n";
    return 0;
}

void swap (int *a, int *b)  { // address of x, address of y, a and b are pointer
    int temp = *a; // *a is not a pointer, but dereferencing
    *a = *b;
    *b = temp;
}

void findMaxAndPosition(int arr[], int size, int* max, int* pos) {
    
    for(int i = 0; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
            *pos = i;
        }
    }
}

float * createArray(int size) {
    float * arr = (float *)malloc(sizeof(float) * size);
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1.2 * i;
    }
    return arr; // Don't free()!!
}
