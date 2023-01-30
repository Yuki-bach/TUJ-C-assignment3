//
//  main.cpp
//  Assignment03
//
//  Created by Yuki Ogawa on 6/4/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    
    // Exercise 01
    int grade;
    int sum = 0;
    int times = 0;
    char letter;

    while(true)
    {
        // Let user to input grade
        printf("Input your grade: ");
        scanf("%d", &grade);

        // save the sum of grade and how many times the user input grade
        sum += grade;
        times++;

        // Ask user whether continue or not
        printf("Input another grade? (y / n): ");
        scanf("%c", &letter);
        scanf("%c", &letter);

        if (letter == 'n')
        {
            int avg = sum / times;
            char gradeLetter;

            if (avg >= 90)
            {
                gradeLetter = 'A';
            }
            else if (avg >= 80)
            {
                gradeLetter = 'B';
            }
            else if (avg >= 70)
            {
                gradeLetter = 'C';
            }
            else
            {
                gradeLetter = 'F';
            }

            printf("The average is %d (%c)\n", avg, gradeLetter);
            break;
        }

    }

    // Exercise 02
    char repeat;
    int grade_2;
    int sum_2 = 0;
    int times_2 = 0;

    while(repeat != 'n')
    {
        // Let user to input grade
        printf("Input your grade: ");
        scanf("%d", &grade_2);

        // save the sum of grade, and how many times the user input grade
        sum_2 += grade_2;
        times_2++;

        // Ask user whether continue or not
        printf("Input another grade? (y / n): ");
        scanf("%c", &repeat);
        scanf("%c", &repeat);
    }

    // When user input 'n', come here.
    int avg = sum_2 / times_2;
    char gradeLetter;

    // Set gradeLetter
    if (avg >= 90)
    {
        gradeLetter = 'A';
    }
    else if (avg >= 80)
    {
        gradeLetter = 'B';
    }
    else if (avg >= 70)
    {
        gradeLetter = 'C';
    }
    else
    {
        gradeLetter = 'F';
    }

    printf("The average is %d (%c)\n", avg, gradeLetter);



    // Exercise 03
    // input is positive number

    int number;
    int largest = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Input number: ");
        scanf("%d", &number);

        // if the number is larger than "largest"
        if (number > largest)
        {
            largest = number;
        }

    }

    printf("The largest one is %d\n", largest);

    // Exercise 04
    int limit;
    int sumOfNum = 0;
    int sumOfSqr = 0;
    int sumOfCube = 0;

    printf("Input number: ");
    scanf("%d", &limit);

    for(int i = 1; i <= limit; i++)
    {
        sumOfNum += i;
        sumOfSqr += i * i;
        sumOfCube += i * i * i;
    }

    printf("sum is %d\nsum of the squares is %d\nsum of the cubes is %d\n", sumOfNum, sumOfSqr, sumOfCube);


    
    return 0;
}
