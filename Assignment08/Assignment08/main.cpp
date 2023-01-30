//
//  main.cpp
//  Assignment08
//
//  Created by Yuki Ogawa on 7/9/21.
//

#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <unistd.h>
#include <ctype.h>

#define SIZE 3

struct course {
    char Department[15];
    int Course_number;
    char Course_title[30];
    short Credit;
};
typedef struct course Course;

void inputCourse(Course * course);
void printCourse(Course * course);
void printCourseRow(Course * course);
void inputAllCourses(Course * course[], int size);
void printAllCourses(Course * course[], int size);

void saveAllCoursesText(Course * course[], int size);
void loadAllCoursesText(Course * course[]);
void saveAllCoursesData(Course * course, int size);
void loadAllCoursesData(Course * course[]);


void inputCourse(Course * course){
    printf("%s", "Enter Department: ");
    scanf("%15s", &course->Department);
    
    printf("%s", "Enter Course number: ");
    scanf("%04d", &course->Course_number);
    
    printf("%s", "Enter Course title: ");
    scanf("%30s", &course->Course_title);
    
    printf("%s", "Enter Credit: ");
    scanf("%1hd", &course->Credit);
}

void printCourse(Course * course) {
    printf("%-15s", "Department");
    printf("%30s\n", course->Department);
    
    printf("%-15s", "Course number");
    printf("%s%04d\n", "                          ", course->Course_number);
    
    printf("%-15s", "Course title");
    printf("%30s\n", course->Course_title);
    
    printf("%-15s", "Credit");
    printf("%30hd\n", course->Credit);
}

void printCourseRow(Course * course) {
    printf("%-15s ", course->Department);

    printf("%04d ",course->Course_number);

    printf("%-30s ", course->Course_title);
    
    printf("%-1hd\n", course->Credit);
}

void inputAllCourses(Course * course[], int size) {
    for (int i = 0; i < size; i++) {
        inputCourse(course[i]);
    }
}

void printAllCourses(Course * course[], int size) {
    for (int i = 0; i < size; i++) {
        printCourseRow(course[i]);
    }
}


void saveAllCoursesText(Course * course[], int size)
{

    
    FILE *fh;
    if( (fh= fopen("courses.txt", "w")) == NULL )
    {
        printf("open %s failed\n", "data.txt"); // exit(1);
    }
    else
    {
        printf("file is opened\n");
        for (int i = 0; i < size; i++)
        {
//            fprintf(fh, "%15s\t%4d\t%30s\t%1hd\n", course[i]->Department, course[i]->Course_number, course[i]->Course_title, course[i]->Credit);
            fprintf(fh, "%s\n", course[i]->Department);
        }
        fclose(fh);
        printf("done!!!!\n");
    }
}

void loadAllCoursesText(Course * course[])
{
    FILE * cfPtr;
    if ((cfPtr = fopen("courses.txt", "r")) = NULL)
    {
        printf("File could not be opened\n");
    }

    int i = 0;
    Course temp;
    while (fscanf(cfPtr, "%s", &temp) == 1)
    {
        course[i] = &temp;
        printf("%s, ", course[i]);
        i++;
    }
    fclose(cfPtr);
}

void saveAllCoursesData(Course * course, int size)
{
    
}

void loadAllCoursesData(Course * course[])
{
    
}






int main(int argc, const char * argv[]) {

    // Assignment 08
//    Course * courses[SIZE];
//
//    courses[0] = (Course *)malloc(sizeof(Course));
//    courses[1] = (Course *)malloc(sizeof(Course));
//    courses[2] = (Course *)malloc(sizeof(Course));
//
//    inputAllCourses(courses, SIZE);
//    printAllCourses(courses, SIZE);
    
    // Assignment 09
    /*
     Define a SIZE constant (the value is irrelevant, but for testing, you may want to keep it small enough – no bigger than 5)
     • Create an array of course pointers using SIZE
     • Dynamically allocate each element of the array
     • Call inputAllCourses() (from the previous assignment)
     • Save the array using saveAllCoursesText() and saveAllCoursesData().
     • Load the data using loadAllCoursesText() and loadAllCoursesData().
     o Check that the correct data is being loaded for each function by calling printAllCourses() (from the previous assignment)
     o Use 2 arrays, one for each function.
     */
    
    Course * courses[SIZE];
    courses[0] = (Course *)malloc(sizeof(Course));
    courses[1] = (Course *)malloc(sizeof(Course));
    courses[2] = (Course *)malloc(sizeof(Course));
    
    inputAllCourses(courses, SIZE);
    saveAllCoursesText(courses, SIZE);
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
