//
//  main.cpp
//  Assignment05
//
//  Created by Yuki Ogawa on 6/16/21.
//

#include <iostream>
int max2(int num1, int num2);
int max3(int num1, int num2, int num3);
void circleInformation(int radius);
void drawRectangle(int width, int height);
void drawRectangle5(int width, int height, char c);
bool difference3(char c1, char c2, char c3);
int countDigits(int num);


int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Exercise 01
    printf("max2(3, 5) : %d\n", max2(3, 5));
    
    // Exercise 02
    printf("max3(3, 5, 1) : %d\n", max3(3, 5, 1));
    
    // Exercise 03
    circleInformation(4);
    
    // Exercise 04
    drawRectangle(3,4);
    
    // Exercise 05
    drawRectangle5(5,2, '@');
    
    // Exercise 06
    if (difference3('a','d','g')) {
        puts("GoodJob!!");
    }
    
    // Exercise 07
    printf("%d\n", countDigits(312));
    
    
    std::cout << "Hello, World!\n";
    return 0;
}

int max2 (int num1, int num2) {
    return  num1 > num2 ? num1 : num2;
}

int max3 (int num1, int num2, int num3) {
    return max2(num1, num2) > num3 ? max2(num1, num2) : num3;
}

void circleInformation(int radius) {
    printf("Perimeter : %f\n", radius * 3.14 * 2);
    printf("Area : %f\n", radius * radius * 3.14);
}

void drawRectangle(int width, int height) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void drawRectangle5(int width, int height, char c) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

bool difference3(char c1, char c2, char c3) {
    return (c2 - c1 == 3 && c3 - c2 == 3);
}

int countDigits(int num) {
    int output = 0;
    while(num > 1) {
        output += 1;
        num /= 10;
    }
    
    return output;
}
