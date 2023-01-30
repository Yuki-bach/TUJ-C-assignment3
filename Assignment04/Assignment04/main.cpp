//
//  main.cpp
//  Assignment04
//
//  Created by Yuki Ogawa on 6/9/21.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define SIZE 10
# define HUNDRED 100
# define NINE 9

int main(void) {

    // Exercise01
    int arr1[SIZE] = {5, 24, 76, 1, 8, 53, 40, 7, 33, 10};
    int sum = 0;

    // index of smallest and biggest element
    int smallest = 0;
    int biggest = 0;

    for(int i = 0; i < SIZE; i++)
    {
        int num = arr1[i];
        if (num < arr1[smallest])
        {
            smallest = i;
        }
        if (num > arr1[biggest])
        {
            biggest = i;
        }

        sum += num;
    }

    float avg = (float) sum / SIZE;

    printf("biggest element: %d \nsmallest element: %d \nindex of biggest element: %d \nindex of smallest element: %d \naverage: %f\n", arr1[biggest], arr1[smallest], biggest, smallest, avg);


    // Exercise02
    srand(time(NULL));

    int arr2[SIZE];
    for(int i = 0; i < 100; i++)
    {
        unsigned int num = rand() % 10;

        if (0 <= num || num <= NINE)
        {
            arr2[num]++;
        }
    }

    // Check if the code works
    for(int i = 0; i < 10; i++)
    {
        printf("%d: %d \n", i, arr2[i]);
    }
    
    
    
    // Exercise03
    int arr[SIZE] = {3,5,6,1,-4,2,7,-8,6,9};

    // save the index of negative numbers in array
    int index[2] = {0, 0};
    int indexNumber = 0;
    
    for(int i = 0; i < HUNDRED; i++)
    {
        if (arr[i] < 0)
        {
            index[indexNumber] = i;
            indexNumber++;
        }
    }

    //Swapping
    int temp = arr[index[0]];
    arr[index[0]] = arr[index[1]];
    arr[index[1]] = temp;

    // Check if the code work
    for (int j = 0; j < SIZE ; j++) {
        printf("%d ", num);
    }

    getchar();
    return 0;
}
